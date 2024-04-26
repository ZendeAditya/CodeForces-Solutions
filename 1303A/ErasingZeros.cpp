#include<bits/stdc++.h>

using namespace std;
string removeFirstAndLastZero(const string& str) {
    string result = str;
    while (!result.empty() && result[0] == '0') {
        result.erase(0, 1);
    }
    while (!result.empty() && result.back() == '0') {
        result.pop_back();
    }
    return result;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        string newStr = removeFirstAndLastZero(str);
        int len = newStr.length();
        int count = 0;
        for (int  i = 0; i < len; i++)
        {
            if (newStr[i] == '0'){
                count++;
            }
        }
        cout<<count<<endl;
        
    };
    return 0;
}