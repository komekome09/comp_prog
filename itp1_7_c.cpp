#include <iostream>
using namespace std;

int main(){
    int r, c;
    cin >> r >> c;

    int g[101][101];
    fill(g[0], g[101], 0);
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            int t;
            cin >> t;
            g[i][j] = t;   
            g[i][c] += t;
            g[r][j] += t;        
        }
    }
    for(int i = 0; i < c; i++){
        g[r][c] += g[r][i];
    }

    int d[101];
    fill(d, d, 0);
    for(int i = 0; i < r+1; i++){
        for(int j = 0; j < c+1; j++){
            if(j)
                cout << " ";
            cout << g[i][j];
        }
        cout << endl;
    }
    return 0;
}