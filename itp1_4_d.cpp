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

    cout << *min_element(a.begin(), a.end()) << " " << *max_element(a.begin(), a.end()) << " " << accumulate(a.begin(), a.end(), 0LL) << endl;
    return 0;
}