#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s = "";
    while(n != 0)
    {
        if(n % 2 == 0)
        {
            s = '0' + s;
        }
        else
        {
            s = '1' + s;
        }
        n /= 2;
    }
    cout << s << "\n";
    int cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '1')
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
    }
    cout << "zeros " << cnt2 << "\n";
    cout << "number of units " << cnt1;
    return 0;
}