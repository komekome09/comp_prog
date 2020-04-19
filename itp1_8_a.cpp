#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    char a;

    while(true){
        scanf("%c", &a);

        if(a >= 'A' && a <= 'Z')
            printf("%c", (char)(a + 32));
        else if(a >= 'a' && a <= 'z')
            printf("%c", (char)(a - 32));
        else
            cout << a;
        
        if(a == '\n') break;
    }
    return 0;
}