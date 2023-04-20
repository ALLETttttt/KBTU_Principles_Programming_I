#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int s;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        v.push_back(s);
    }
    cout << (*max_element(v.begin(), v.end())) - (*min_element(v.begin(), v.end()));
    return 0;
}