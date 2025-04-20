#include<iostream>
using namespace std;
int main() {
    string s, res = "";
    char ch;
    getline(cin, s);
    cin >> ch;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] != ch) res += s[i];
    }
    cout << res;
    return 0;
}
