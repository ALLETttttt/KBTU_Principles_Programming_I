#include <bits/stdc++.h>

using namespace std;

bool Pal(string s)
{
    string t;
    t = s;
    reverse(s.begin(), s.end());
    if (s == t)
    return true;
    else return false;
}
int main()
{
    string s;
    cin >> s;
    if(Pal(s)) cout << "Yes";
    else cout << "No";
}