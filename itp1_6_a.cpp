#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int main(){
    int n, o;
    vector<int> a;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> o;
        a.push_back(o);
    }
    
    reverse(a.begin(), a.end());
    for(int i = 0; i < a.size(); i++){
        if(i == a.size()-1){
            cout << a[i];
        }else{
            cout << a[i] << " ";
        }
    }
    cout << endl;
    return 0;
}