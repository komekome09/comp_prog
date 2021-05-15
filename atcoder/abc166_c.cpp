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

vector<int> h(1000000, 0);

using graph = vector<vector<int>>;
vector<bool> seen;
int mmax = 0;
void dfs(const graph &g, int v){
    seen[v] = true;
    if(h[v] > mmax) mmax = h[v];

    for(auto next_v : g[v]){
        if(seen[next_v]) continue;
        dfs(g, next_v);
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }
    
    graph g(n);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        g[a-1].push_back(b-1);
        g[b-1].push_back(a-1);
    }

    int cnt = 0;
    for(int i = 0; i < n; i++){
        int k = h[i];
        for(int j = 0; j < g[i].size(); j++){
            if(h[i] == h[g[i][j]]){
                k = -1;
                break;
            }
            k = max(k, h[g[i][j]]);
        }
        if(k == h[i]) cnt++;
    }
    cout << cnt << endl;
    return 0;
}