#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s;
    vector <int> v;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        v.push_back(s);
    }
    set <int> r(v.begin(), v.end());
    set <int>::iterator it;
    for(it = r.begin(); it != r.end(); it++)
    {
        if(*it % 2 != 0)
        {
            cout << *it << " ";
        }
    }
    return 0;
}