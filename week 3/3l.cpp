#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    int n, k;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> k;
    int b[k];
    for (int i = 0; i < k; i++){
        cin >> b[i];
    }
    int z[n + k];
    for (int i = 0; i < n; i++){
        z[i] = a[i];
    }
    int s = 0;
    for (int i = n; i < n + k; i++){
        z[i] = b[s];
        s++;
    }
    sort(z, z+n+k);
    for (int i = 0; i < n + k; i++){
        cout << z[i] << " ";
    }
    
    return 0;
}