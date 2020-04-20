#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
    string w,s;
    cin >> w;

    int c = 0;
    while(cin >> s, s != "END_OF_TEXT"){
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);
        if(s.length() == w.length() && s.find(w) == 0) c++;
    }
    printf("%d\n", c);
    return 0;
}