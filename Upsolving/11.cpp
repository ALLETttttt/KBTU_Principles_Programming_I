#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char z;
    cin >> z;
    if(z == 'k')
    {
        int k;
        cin >> k;
        double nn = n / pow(2, 10);
        cout << fixed;
        cout << setprecision(k) << nn;
    }
    else if(z == 'b')
    {
        long long zz = n * pow(2, 10);
        cout << zz;
    }
    return 0;
}