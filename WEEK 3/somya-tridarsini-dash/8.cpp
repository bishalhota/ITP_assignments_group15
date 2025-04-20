#include<iostream>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int n = s.length(), flag = 1;
    for(int i = 0; i < n / 2; i++) {
        if(s[i] != s[n - 1 - i]) {
            flag = 0;
            break;
        }
    }
    if(flag) cout << "Palindrome";
    else cout << "Not Palindrome";
    return 0;
}
