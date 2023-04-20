#include <iostream>
using namespace std;
int main() {
    int a, b, c, d, e;
    cin >> a;
    b = a % 2;
    a = a / 2;
    c = a % 2;
    a = a / 2;
    d = a % 2;
    a = a / 2;
    e = a % 2;
    cout << b*8 + c*4 + d*2 + e*1;
    return 0;    
}