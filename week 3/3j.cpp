#include <iostream>
using namespace std;
int main (){
    int n, dream, index, cnt = 0;
    cin >> n >> dream;
    bool point = false;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        if (a[i] == dream){
            index = i + 1;
            point = true;
        }

    }
    if (point == true){
        cout << index;
    }
    else {
        for (int i = 0; i < n; i++){
            if (dream > a[i])
            cnt++;
        }
        cout << cnt;
    }
    return 0;
}