#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int s = a[0][0], s1 = a[0][0];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (s < a[i][j]){
                s = a[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i][j] > s1 && a[i][j] < s){
                s1 = a[i][j];
            }
        }
    }
    if (s == s1) cout << 0;
    else cout << s1;
        

    return 0;
}