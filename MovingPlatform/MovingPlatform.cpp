#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Platform {
    int level;
    int change;
};

struct Edge {
    int u, v;
};

int bfs(int n, int h, const vector<Platform>& platforms, const vector<Edge>& edges, int start, int target) {
    vector<bool> visited(n, false);
    vector<int> distance(n, -1);
    distance[start] = 0;

    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        int nextLevel = (platforms[u].level + platforms[u].change) % h;

        for (const Edge& edge : edges) {
            int v = (edge.u == u) ? edge.v : edge.u;

            if (visited[v] || platforms[v].level != nextLevel) {
                continue;
            }

            distance[v] = distance[u] + 1;
            q.push(v);
            visited[v] = true;
        }
    }

    return distance[target];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, h;
        cin >> n >> m >> h;

        vector<Platform> platforms(n);
        for (int i = 0; i < n; ++i) {
            cin >> platforms[i].level;
        }

        for (int i = 0; i < n; ++i) {
            cin >> platforms[i].change;
        }

        vector<Edge> edges(m);
        for (int i = 0; i < m; ++i) {
            cin >> edges[i].u >> edges[i].v;
            --edges[i].u; --edges[i].v; // Adjust indexing to 0-based
        }

        int start = 0; // Platform 1
        int target = n - 1; // Platform n

        int result = bfs(n, h, platforms, edges, start, target);
        cout << result << endl;
    }

    return 0;
}
