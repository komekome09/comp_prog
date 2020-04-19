#include <iostream>
using namespace std;

int main(){
    int n, num;
    char card;
    bool cards[4][13]; // 0: Spade, 1: Heard, 2: Club, 3: Diamond
    char p[4] = {'S', 'H', 'C', 'D'};
    std::fill(cards[0], cards[4], false);
    
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> card >> num;
        switch(card){
            case 'S':
                cards[0][num-1] = true;
                break;
            case 'H':
                cards[1][num-1] = true;
                break;
            case 'C':
                cards[2][num-1] = true;
                break;
            case 'D':
                cards[3][num-1] = true;
                break;
        }
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 13; j++){
            if(!cards[i][j])
                cout << p[i] << " " << j+1 << endl;
        }
    }

    return 0;
}