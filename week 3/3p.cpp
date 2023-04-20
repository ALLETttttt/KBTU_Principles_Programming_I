#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    bool king = false;
    for (int i = 0; i < n; i++){
        if (n == i*i){
            cout << "Yes";
            king = true;
            break;
        }
    }
    if (king == false) cout << "No";
    return 0;
}