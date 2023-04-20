#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n; 
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x = 0;
    for(int i = 0; i < n; i++)
    {
        x = x ^ a[i];
    }
    bool ok = 0;
    for(int i = 0; i < 1e6; i++)
    {
        if(x == pow(2, i))
        {
            ok = 1;
            break;
        }
    }
    if(ok) cout << "YES";
    else cout << "NO";
    return 0;
}