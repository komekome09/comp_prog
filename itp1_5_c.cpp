#include <iostream>
using namespace std;

int main(){
    int a, b;

    while(cin >> a >> b, a != 0){
        for(int y = 0; y < a; y++){
            for(int x = 0; x < b; x++){
                if(y%2==0){
                    if(x%2 == 0)
                        cout << '#';
                    else
                        cout << '.';
                }else{
                    if(x%2 == 0)
                        cout << '.';
                    else
                        cout << '#';
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}