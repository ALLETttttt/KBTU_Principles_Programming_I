#include <iostream>
using namespace std;
int main()
{
    int n, i = 0, a = 0;
    cin >> n;
    while(i != n)
    {
        if(i == 0)
        {
            a += 2;
        }
        else
        {
            a += 3;
        }
        i++;
        cout << a << " ";
    }
    return 0;
}