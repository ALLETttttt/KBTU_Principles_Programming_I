#include <iostream>
using namespace std;
int main()
{
    int n, j = 0, rem;
    cin >> n;
    char hex[50];
    while(n != 0)
    {
        rem = n % 16;
        if(rem < 10)
        {
            hex[j++] = 48 + rem;
        }
        else
        {
            hex[j++] = 55 + rem;
        }
        n /= 16;
    }
    for(int i = j-1; i >= 0; i--)
    {
        cout << hex[i];
    }
    return 0;
}