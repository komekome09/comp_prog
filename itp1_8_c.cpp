#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
    string a;
    int b[26] = {0};

    while(getline(cin, a)){
        for(int i = 0; i < a.length(); i++){
            if(a[i] >= 'a' && a[i] <= 'z') a[i] -= 32;
            if(a[i] >= 'A' && a[i] <= 'Z') b[a[i] - 'A']++;
        }
    }
    for(int i=0; i < 26; i++){
        printf("%c : %d\n", 'a'+i, b[i]);
    }
    return 0;
}