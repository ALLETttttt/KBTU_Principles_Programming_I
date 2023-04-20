#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string to_num(string s)
{
    string t = "";
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            t = s[i] + t;
        }
    }
    return t;
}
int main()
{
    string s;
    vector <string> v;
    while(cin >> s)
    {
        string d = to_num(s);
        v.push_back(d);
    }
    for(int i = v.size()-1; i >= 0; i--)
    {
        cout << v[i];
    }
    return 0;
}