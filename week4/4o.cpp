#include <iostream>
using namespace std;
int main (){
    int n, r = 1, c = 1;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    int s = a[0][0];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i == j && s < a[i][j]){
                s = a[i][j];
                r = i + 1;
                c = j + 1;
            }
                

        }
    
    }
    cout << "Maximum element is: " << s << " with " << "coordinates: " << r << ";" << c << endl;
    
    return 0;
}