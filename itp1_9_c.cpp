#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    string t, h;
    int tt = 0, hh = 0;
    for(int i = 0; i < n; i++){
        cin >> t >> h;
        if(t < h) hh+=3;
        else if(t > h) tt+=3;
        else if(t == h){
            tt++; hh++;
        }
    }

    printf("%d %d\n", tt, hh);
    return 0;
}