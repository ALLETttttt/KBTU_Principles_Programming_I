#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s = to_string(n);
    string t, d;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '1')
        {
            t += s[i];
        }
    }
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '1')
        {
            continue;
        }
        else
        {
            d += s[i];
        }
    }
    cout << t << d;
}