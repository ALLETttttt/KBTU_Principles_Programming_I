#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> v;
    int s;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        v.push_back(s);
    }
    int sum = 0;
    set <int> r(v.begin(), v.end());
    set <int>:: iterator it;
    for(it = r.begin(); it != r.end(); it++)
    {
        sum += *it;
    }
    cout << sum;
    return 0;

}