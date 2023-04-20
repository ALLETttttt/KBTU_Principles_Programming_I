#include <iostream>
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
    int k;
    cin >> k;
    int main = 0, z = abs(a[0]-k);
    for(int i = 1; i < n; i++)
    {
        int j = abs(a[i]-k);
        if(j < z)
        {
            z = j;
            main = i;
        }
    }
    cout << main;
    return 0;
}