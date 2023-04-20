#include <iostream>
#include <algorithm>
using namespace std;
bool isSorted(int a[], int b[], int n)
{
    for(int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    sort(b, b + n);
    for(int i = 0; i < n; i++)
    {
        if(a[i] != b[i])
        return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if(isSorted(a, b, n))
    {
        cout << "Sorted";
    }
    else
    {
        cout << "Not sorted";
    }
}