#include <iostream>
#include <string>
using namespace std;

int main(){
    int a, i = 1;
    while(cin >> a, a != 0){
        cout << "Case " << i << ": " << a << endl;
        i++;
    }
    return 0;
}