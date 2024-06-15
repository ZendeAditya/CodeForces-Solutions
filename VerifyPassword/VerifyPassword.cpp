#include<bits/stdc++.h>

using namespace std;

bool isStrongPassword(const string &password) {
    int n = password.size();
    string letters = "";
    string digits = "";
    
    for (char ch : password) {
        if (isalpha(ch))
            letters += ch;
        else if (isdigit(ch))
            digits += ch;
    }
    for (int i = 1; i < digits.size(); ++i) {
        if (digits[i] < digits[i - 1])
            return false;
    }
    for (int i = 1; i < letters.size(); ++i) {
        if (letters[i] < letters[i - 1])
            return false;
    }

    bool letterFound = false;
    for (char ch : password) {
        if (isalpha(ch)) {
            letterFound = true;
        } else if (isdigit(ch) && letterFound) {
            return false;
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string password;
        cin >> password;

        if (isStrongPassword(password)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
