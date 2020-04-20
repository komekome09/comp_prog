#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
    char a[1000];
    
    while(scanf("%s", a), a[0] != '0'){
        int b = 0;
        for(int i = 0; i < strlen(a); i++){
            int c = a[i] - '0';
            b += c%10;
        }
        printf("%d\n", b);    
    }
    return 0;
}