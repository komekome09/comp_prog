#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll n;
    cin >> n;
    string s1, s2, s3, s4, s5;
    cin >> s1 >> s2 >> s3 >> s4 >> s5;
    rep(i, n){
        string t1, t2, t3, t4, t5;
        t1 = s1.substr(i*4, 4);
        t2 = s2.substr(i*4, 4);
        t3 = s3.substr(i*4, 4);
        t4 = s4.substr(i*4, 4);
        t5 = s5.substr(i*4, 4);

        if(t1 == ".###" && t2 == ".#.#" && t3 == ".#.#" && t4 == ".#.#" && t5 == ".###"){
            cout << "0";
        }else if(t1 == "..#." && t2 == ".##." && t3 == "..#." && t4 == "..#." && t5 == ".###"){
            cout << "1";
        }else if(t1 == ".###" && t2 == "...#" && t3 == ".###" && t4 == ".#.." && t5 == ".###"){
            cout << "2";
        }else if(t1 == ".###" && t2 == "...#" && t3 == ".###" && t4 == "...#" && t5 == ".###"){
            cout << "3";
        }else if(t1 == ".#.#" && t2 == ".#.#" && t3 == ".###" && t4 == "...#" && t5 == "...#"){
            cout << "4";
        }else if(t1 == ".###" && t2 == ".#.." && t3 == ".###" && t4 == "...#" && t5 == ".###"){
            cout << "5";
        }else if(t1 == ".###" && t2 == ".#.." && t3 == ".###" && t4 == ".#.#" && t5 == ".###"){
            cout << "6";
        }else if(t1 == ".###" && t2 == "...#" && t3 == "...#" && t4 == "...#" && t5 == "...#"){
            cout << "7";
        }else if(t1 == ".###" && t2 == ".#.#" && t3 == ".###" && t4 == ".#.#" && t5 == ".###"){
            cout << "8";
        }else if(t1 == ".###" && t2 == ".#.#" && t3 == ".###" && t4 == "...#" && t5 == ".###"){
            cout << "9";
        }
    }
    cout << endl;
    return 0;
}