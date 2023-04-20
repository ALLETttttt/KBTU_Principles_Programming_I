#include <iostream>
using namespace std;
int main () {
    int arr[7] = {7, 10, 11, 17, 22, 8, 6};
    int max = arr[0];
    for (int i = 1; i <= 1000; ++i){
        if (max < arr[i]){
            max = arr[i];
        }
    }
    cout << max << endl;
    return 0;
}