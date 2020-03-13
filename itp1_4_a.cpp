#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    cout << std::fixed << std::setprecision(5) << a/b <<  " " << a%b << " " << (double)a/(double)b << endl;
    return 0;
}