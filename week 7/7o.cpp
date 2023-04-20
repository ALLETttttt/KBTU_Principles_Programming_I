#include <iostream>
using namespace std;
string lok(int n, int k, string s)
{
    if (n == 0) return s;
    if (n % k >= 10) s = char((n%k)+55) + s;
    else s = char((n%k)+48) + s;
    return lok(n/k, k, s);
}
int main()
{
    string s;
    int n, k;
    cin >> n >> k;
    cout << lok(n, k, s);
}