#include <iostream>
using namespace std;

void find(int n){
    int sum = 0;
    while(n > 0){
        sum = sum + (n % 10);
        n = n / 10;
    }
    cout << sum;
}
int main(){
    int n;
    cin >> n;
    find(n);
}