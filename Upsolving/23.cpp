#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long a, b, n = 0;
    cin >> a >> b;
    bool target = false;
    bool point = false;
    if(a == b)
    {
        cout << "YES " << 0;
    }
    else if(a < b)
    {
        while(n <= 60)
        {
            if(a*pow(2, n) == b)
            {
                target = true;
                break;
            }
            n++;
        }
        if(target == true)
        {
            cout << "YES " << n;
        }
        else
        {
            cout << "NO";
        }
    }
    else if(a > b)
    {
        while(n >= -60)
        {
            if(a*pow(2, n) == b)
            {
                point = true;
                break;
            }
            n--;
        }
        if(point == true)
        {
            cout << "YES " << n;
        }
        else
        {
            cout << "NO";
        }
    }
    return 0;
}