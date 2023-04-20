#include <iostream>
#include <cmath>
using namespace std;
int titleToNumber(string s) 
{
    long long pow = 0;
    for(int i = 0; i < s.size(); ++i)
    {
        pow = pow*26 + (s[i]-'A'+1);
    }
    return pow;
}
int main()
{
    string s;
    cin >> s;
    cout << titleToNumber(s);

    // string s;
    // cin >> s;
    // int ans = 0;
    // for(int i = s.size()-1; i >= 0; --i) // можно и с for(int i = 0; i < s.size(); i++)
    // {
    //     ans += pow(26, s.size()-i-1) * (s[i]-'A'+1);
    // }
    // cout << ans;
}