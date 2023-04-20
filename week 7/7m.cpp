#include <bits/stdc++.h>
using namespace std;

void Simple(int n)
{
    if (n >= 2) Simple(n-1);
    cout << n << " ";  
}
int main()
{
    int n;
    cin >> n;
    Simple(n);
}