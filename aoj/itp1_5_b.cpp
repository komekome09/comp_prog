#include <iostream>
using namespace std;

int main(){
    int a, b;

    while(cin >> a >> b, a != 0){
        for(int y = 0; y < a; y++){
            for(int x = 0; x < b; x++){
                if(y == 0 || y == a - 1){
                    cout << '#';
                    continue;
                }
                if(x == 0 || x == b - 1)
                    cout << '#';
                else
                    cout << '.';
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}