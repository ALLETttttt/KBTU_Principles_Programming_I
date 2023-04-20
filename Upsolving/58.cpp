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
    int n, m;
    cin >> n >> m;
    cout << GCD(n, m);

    // int n, m;
    // cin >> n >> m;
    // int k, j;
    // while(n % m != 0)
    // {
    //     k = n / m;
    //     j = n % m;
    //     n = m;
    //     m = j;
    // }
    // cout << m;
}