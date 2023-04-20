#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    while(n > 0)
    {
        if(n % 2 == 1)
        {
            s = '1' + s;
        }
        else
        {
            s = '0' + s;
        }
        n /= 2;
    }
    while(s.size() != 8)
    {
        s = '0' + s;
    }
    string t;
    t = s;
    reverse(s.begin(), s.end());
    if(s == t)
    {
        cout << "It works!";
    }
    else
    {
        cout << "Sad";
    }
    return 0;
}