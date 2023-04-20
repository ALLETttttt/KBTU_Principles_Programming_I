#include <iostream>
using namespace std;
int main () {
    int s, k;
    cin >> s >> k;
    if (s > k) cout << 1;
    else if ( s < k) cout << 2;
    else if (s == k) cout << 0;
    return 0;
}