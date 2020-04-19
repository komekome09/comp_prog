#include <iostream>
using namespace std;

int main(){
    int a, b;

    while(cin >> a >> b, a != 0){
        for(int y = 0; y < a; y++){
            for(int x = 0; x < b; x++){
                cout << '#';
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}