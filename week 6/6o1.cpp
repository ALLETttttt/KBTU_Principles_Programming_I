#include <iostream>
using namespace std;
int lucky(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }

    cout << sum;
}
int main (){
    int n;
    cin >> n;
    int sum = 0;
    if(lucky(n) % (sum % 10) == 0){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}