#include <iostream>
using namespace std;

bool ticket(int n){
    int sum = 0;
    int s;
    s = n;

    while(n > 0){
        sum = sum + (n % 10);
        n = n / 10;
        }
        if(sum % (s % 10) == 0){
            return true;
    
    }
    return false;

}
int main (){
    int n;
    cin >> n;
    int sum = 0;
    if(ticket(n)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}
