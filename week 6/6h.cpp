#include <iostream>
using namespace std;

bool valid(int n){
    bool target = true;
    while (n > 0){
        if ((n % 10) % 2 != 0){
            target = false;
            break;
        }
        n /= 10;

    }
    if (target == true){
        return true;
    }
    return false;

}
int main (){
    int n;
    cin >> n;
    if(valid(n)){
        cout << "Valid";
    }
    else {
        cout << "Not valid";
    }
}