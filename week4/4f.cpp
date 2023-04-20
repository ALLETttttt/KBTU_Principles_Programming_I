#include <iostream>
using namespace std;
int main (){
    int n, row = 1, col = 1;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int z = a[0][0];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(z < a[i][j]){
                z = a[i][j];
                row = i + 1;
                col = j + 1;
            }
        }
    }
    cout << row << " " << col;
    return 0;
}