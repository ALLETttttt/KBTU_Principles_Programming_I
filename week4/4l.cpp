#include <iostream>
using namespace std;
int main (){
    int n, m, r = 1, c = 1, sum = 0;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    cout << "coordinates of min elements: " << endl;
    for (int i = 0; i < m; i++){
        int s = a[0][i];
        for (int j = 0; j < n; j++){
            if (s > a[j][i]){
                s = a[j][i];
                c = j + 1;
                r = i + 1;
            }
        }
        cout << c << ";" << r << endl;
        
        sum = sum + s;
    }
    cout << "Their sum: " << endl << sum;
    return 0;
}