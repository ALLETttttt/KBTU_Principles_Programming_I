#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
    set <char> v;
    for(int i = 0; i < s.size(); i++)
    {
        v.insert(s[i]);
    }
    cout << v.size() << "\n";
    for(auto i : v)
    {
        cout << i << " ";
    }
    return 0;

}