#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    for (int i = 2; i < n; i++){
         bool target = true;
        for (int j = 2; j <= i - 1; j++){
            if (i % j == 0){
                target = false;
                break;

            }
        }
        if (target == true)
        cout << i << " is prime " << endl;
    }

    return 0;
}