#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main(){
    string s, p;
    cin >> s >> p;
    s += s;
    cout << s << endl;
    if(s.find(p) != string::npos) printf("Yes\n");
    else printf("No\n");
    return 0;
}