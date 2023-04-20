#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];

    }
    int z = a[0], k = a[0];
    for (int i = 0; i < n; i++){
        if (a[i] > z){
            z = a[i];
        }
        if (a[i] < k){
            k = a[i];
        }
    }
    for (int i = 0; i < n; i++){
        if (a[i] == z){
            a[i] = k;
        }
        cout << a[i] << " ";

    }
    
    return 0;

}