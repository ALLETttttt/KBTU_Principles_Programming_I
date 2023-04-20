#include <iostream>
using namespace std;
string unique(int n, int k)
{
    if (n == k) return "Yes";
    if (n < k) return "No";
    return unique(n, k*2);
}
int main()
{
    int n;
    cin >> n;
    cout << unique(n, 1);
}