#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int n;
    cin >> n;
    int array[n];
    long long z = -1000000000;
    for (int i = 0; i < n; i++){
        cin >> array[i];
        if (z < array[i]) z = array[i];
    }
    cout << z;
    return 0;
}