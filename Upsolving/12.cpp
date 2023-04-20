#include <iostream>
using namespace std;
int main()
{
    int d, c, n, di, ci;
    cin >> d >> c >> n >> di >> ci;
    ci += di*100;
    d = ((d*100)+c)*n;
    if(d > ci)
    {
        cout << "-1";
    }
    else
    {
        d = ci - d;
        cout << d/100 << " " << d%100;
    }
}