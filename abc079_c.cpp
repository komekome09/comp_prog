#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <cfloat>
#include <algorithm>
#include <numeric>
#include <vector>
#include <iterator>
#include <set>
#include <map>
using namespace std;

const double PI=acos(-1);

int main(){
    string s;
    cin >> s;
    char op[] = {'+', '-'},
         op2[][3] = {{'+', '+', '+'},
                    {'+', '+', '-'},
                    {'+', '-', '+'},
                    {'+', '-', '-'},
                    {'-', '+', '+'},
                    {'-', '+', '-'},
                    {'-', '-', '+'},
                    {'-', '-', '-'}};
    int a = s[0] - '0',
        b = s[1] - '0',
        c = s[2] - '0',
        d = s[3] - '0',
        ans[] = {
            a + b + c + d,
            a + b + c - d,
            a + b - c + d,
            a + b - c - d,
            a - b + c + d,
            a - b + c - d,
            a - b - c + d,
            a - b - c - d
        };
    for(int i = 0; i < 8; i++){
        if(ans[i] == 7){
            printf("%d%c%d%c%d%c%d=7", a, op2[i][0], b, op2[i][1], c, op2[i][2], d);
            break;
        }
    }
    return 0;
}