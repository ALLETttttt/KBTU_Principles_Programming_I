#include <iostream>
using namespace std;
int main (){
    int n, m, min;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int samsa[n];
    for (int i = 0; i < n; i++){
        long long samsaa = 0;
        for (int j = 0; j < m; j++){
            samsaa += a[i][j];

        }
        if (i == 0){
            min = samsaa;
        }
        if (samsaa < min){
            min = samsaa;
        }
        samsa[i] = samsaa;
    } 
    for (int i = 0; i < n; i++){
        if (samsa[i] == min){
            cout << i + 1;
            break;
        }
    }

    return 0;
}