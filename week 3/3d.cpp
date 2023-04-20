#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    
    int z = INT32_MIN;
    int k;
    

    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        if (a[i] > z) {
            
            z = a[i];
            k = i + 1;
        }

    }
    cout << k;
    return 0;

}
