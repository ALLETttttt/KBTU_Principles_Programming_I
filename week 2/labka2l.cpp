#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int k = 0; pow(2, k) <= N; k++){
        cout << " " << pow(2, k);
        
    }
    return 0;
}
    
   
