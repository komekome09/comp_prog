#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    double PI=3.14159265358979323846;
    double a;
    cin >> a;

    cout << std::fixed << std::setprecision(6) << PI * a * a <<  " " << 2 * PI * a << endl;
    return 0;
}