#include<iostream>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int a = 0, d = 0, sp = 0;
    for(int i = 0; i < s.length(); i++) {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) a++;
        else if(s[i] >= '0' && s[i] <= '9') d++;
        else sp++;
    }
    cout << a << " " << d << " " << sp;
    return 0;
}
