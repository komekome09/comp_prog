#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int a[100][100];
    int b[100];
    int t;
    fill(a[0], a[100], 0);
    fill(b, b, 0);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> t;
            a[i][j] = t;  
        }
    }
    for(int i = 0; i < m; i++){
        cin >> t;
        b[i] = t;
    }
    for(int i = 0; i < n; i++){
        int s = 0;
        for(int j = 0; j < m; j++){
              s += a[i][j] * b[j];
        }
        cout << s << endl;
    }

    return 0;
}