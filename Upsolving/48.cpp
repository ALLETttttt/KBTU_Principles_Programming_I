#include <iostream>
using namespace std;
string GGWp(string s)
{
    string t;
    for(int i = 0; i < s.size(); i++)
    {
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
        {
            t += s[i];
        }
    }
    return t;
}
int main()
{
    string s, t;
    while(cin >> s)
    {
        t = GGWp(s);
        cout << t << endl;
    }
}