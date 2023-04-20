#include <iostream>
using namespace std;
  string s = "";
string tobin(int n)
{
    if (n == 0) return s;
    s = char(n%2 + 48) + s;
    return tobin(n/2);
    
}
int main()
{
    int n;
    cin >> n;
    cout << tobin(n);
}