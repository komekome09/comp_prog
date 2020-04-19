#include <iostream>
using namespace std;

int main(){
    int n, x, cnt = 0;
    while(cin >> n >> x, n != 0){
        cnt = 0;
        for(int i = 1; i <= n; i++){
            for(int j = i+1; j <= n; j++){
                for(int k = j+1; k <= n; k++){
                    if(i==j || j==k || k==i) continue;
                    if(i+j+k==x){
                        //cout << i << " " << j << " " << k << " " << "O" << endl;
                        cnt++;
                    }
                }
            }
        }
        cout << cnt << endl;
    }
    
    return 0;
}