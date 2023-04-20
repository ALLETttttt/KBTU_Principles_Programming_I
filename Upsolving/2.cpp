#include <bits/stdc++.h>
using namespace std;
int n, a, b;

int main() {
    cin >> n >> a >> b;
    int num1 = (a & (1 << n)), num2 = (b & (1 << n));
    a -= num1, a += num2;
    b -= num2, b += num1;
    if (a == b) {
        cout << "Nothing has changed";
    } else if (a < b) {
        cout << "Good deal for the second number";
    } else {
        cout << "Good deal for the first number";
    }


//     cin >> n >> a >> b;
//     int c = a, e = b;

//     if (a & (1 << n))
//         e |= (1 << n);
//     else
//         e &= ~(1 << n);

//     if (b & (1 << n))
//         c |= (1 << n);
//     else
//         c &= ~(1 << n);
//     if (c > e)
//         cout << "Good deal for the first number";
//     else if (c < e)
//         cout << "Good deal for the second number";
//     else
//         cout << "Nothing has changed";
//     return 0;
}
    