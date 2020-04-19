#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    char op;
    int a, b;
    
    while(cin >> a >> op >> b, op != '?'){
        switch(op){
            case '+':
                cout << a + b << endl;
                break;
            case '-':
                cout << a - b << endl;
                break;
            case '/':
                cout << a / b << endl;
                break;
            case '%':
                cout << a % b << endl;
                break;
            case '*':
                cout << a * b << endl;
                break;
        }
    }
    return 0;
}