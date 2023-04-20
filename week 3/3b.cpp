#include <iostream>
using namespace std;
int main () {
    int n, cnt = 0;
    cin >> n;
    int array[100000];
    for (int i = 0; i < n; i++){
    
        cin >> array[i];

        if (array[i] > 0) cnt++;

    }
    cout << cnt;





    return 0;
}