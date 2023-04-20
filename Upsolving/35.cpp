#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i+1 < n; i++)
    {
        if(a[i] <= a[i+1])
        {
            k -= 1;
        }
        else
        {
            k *= 2;
        }
    }
    cout << k;
    return 0;
}