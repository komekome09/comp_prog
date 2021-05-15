#include <iostream>
using namespace std;

int main() {
    int n, m, l;
    cin >> n >> m >> l;

    int a[100][100], b[100][100];
    fill(a[0], a[100], 0);
    fill(b[0], b[100], 0);
    int t;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> t;
            a[i][j] = t; 
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < l; j++){
            cin >> t;
            b[i][j] = t; 
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < l; j++){
            if(j) cout << " ";
            long h = 0;
            for(int k = 0; k < m; k++){
                h += a[i][k] * b[k][j];
            }
            cout << h;
        }
        cout << endl;
    }

    return 0;
}