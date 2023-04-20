#include <bits/stdc++.h>
using namespace std;
string bok(int a[], int x, int n, int i)
{
    if(i + 1 == n) return "no";
    if(a[i+1] - a[i] <= x) return "cheater";
    return bok(a, x, n, i + 1);
}
int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    cout << bok(a, x, n, 0);
}