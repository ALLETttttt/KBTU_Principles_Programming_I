#include <iostream>
using namespace std;
int main()
{
    string s, t;
    char r;
    cin >> s >> t >> r;
    for(int i = 0; i < s.size(); i++)
    {
        for(int j = 0; j < t.size(); j++)
        {
            if(s[i] == t[j])
            {
                s[i] = r;
            }
        }
    }
    for(int i = 0; i < s.size(); i++)
    {
        cout << s[i];
    }
}