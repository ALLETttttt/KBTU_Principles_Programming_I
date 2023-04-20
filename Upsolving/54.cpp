#include <iostream>
using namespace std;
int GCD(int a, int b)
{
    while(a > 0 && b > 0)
    {
        if(a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    return a + b;
}
// int gcd(int a, int b)
// {
//     if (b == 0)
//     {
//         return a;
//     }
//     return gcd(b, a % b);
// }
int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int z = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            b[i] = GCD(a[i], a[j]);
            if(b[i] > z)
            {
                z = b[i];
            }
        }
    }
    cout << z;
    return 0;
}


