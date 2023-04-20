#include <iostream>
using namespace std;

bool rip(int n, int a[], int x, int i = 0)
{
    if (i >= n) return false;
    if (a[i] == x) return true;
    return rip(n, a, x, ++i);
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    if(rip(n, a, x, 0)) cout << "Yes";
    else cout << "No";
}