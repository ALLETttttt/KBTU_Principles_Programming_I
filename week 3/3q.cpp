#include <iostream>
using namespace std;
int main () {
    int x;
    cin >> x;
    bool target = true;
    for (int i = 2; i < x; i++){
        if (x % i == 0){
            target = false;
            cout << "No";
            break;
        }
    }
    if (target == true) cout << "Yes";
 return 0;
}