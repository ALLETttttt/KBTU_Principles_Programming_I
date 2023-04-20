#include <iostream>
using namespace std;
int main(){
    int n, l, r;
    cin >> n >> l >> r;
    long long sum = 0;
    int a[n];
    for (int i = 1; i <= n; i++){
        cin >> a[i];    
    }
    for (int i = l; i <= r; i++){
        sum += a[i];
    }
    cout << sum;
}