#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt = 1, maxi = 1;
    char ans = s[0], that = s[0];
    for(size_t i = 1; i < s.size(); i++)
    {
        if(s[i] == that)
        {
            cnt++;
        }
        else
        {
            if(cnt > maxi)
            {
                ans = that;
                maxi = cnt;
            }
            cnt = 1;
            that = s[i];
        }
    }
    if(cnt > maxi)
    {
        maxi = cnt;
        ans = that;
    }
    cout << ans << " " << maxi;
}