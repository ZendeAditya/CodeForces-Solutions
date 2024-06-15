#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;

    cin>>str;
    transform(str.begin(), str.end(), str.begin(), [](unsigned char c){ return std::tolower(c); });

     string ans = "";
    for (char c : str) {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y') {
            ans += '.';
            ans += c;
        }
    }
    cout<<ans<<endl;
    return 0;
}