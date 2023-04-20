#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n;
    cin >> n;
    char a[n][n*2-1];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n*2-1;j++){
            a[i][j] = '.';
        }
    }
 
    for(int i =0;i<n;i++){
        for(int j = n - 1 - i; j <= n - 1 + i; j++){
            a[i][j] = '*';
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n*2-1;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
 
    return 0;
}