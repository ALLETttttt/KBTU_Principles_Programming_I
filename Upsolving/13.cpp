#include <iostream>
using namespace std;
int main()
{
    int n, f;
    cin >> n >> f;
    bool target= true;
    for(int i = 2; i*i <= n; i++)
    {
        if(n % i == 0)
        {
            target = false;
        }
    }
    if(target == true && n < 500 && f % 2 == 0)
    {
        cout << "Good job!";
    }
    else
    {
        cout << "Try next time!";
    }
    return 0;
}