#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int f[4][3][10];
    std::fill(f[0][0], f[4][0], 0);

    int a, b, c, d;
    for(int i = 0; i < n; i++){
        cin >> a >> b >> c >> d;
        f[a-1][b-1][c-1] += d;
    }

    for(int x = 0; x < 4; x++){
        for(int y = 0; y < 3; y++){
            for(int z = 0; z < 10; z++){
                cout << " " << f[x][y][z];
            }
            cout << endl;
        }
        if(x != 3)
            cout << "####################" << endl;
    }

    return 0;
}