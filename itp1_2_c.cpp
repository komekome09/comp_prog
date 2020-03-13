#include <iostream>
#include <string>
using namespace std;

int main(){
    int a[3], tmp;
    cin >> a[0] >> a[1] >> a[2];

    for(int i = 0; i < 3; i++){
        for(int j = i+1; j < 3; j++){
            if(a[j] < a[i]){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    cout << a[0] << " " << a[1] << " " << a[2] << endl;

    return 0;
}