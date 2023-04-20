#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int z;
    for(int i = 0; i < n; i++)
    {
        cin >> z;
        v.push_back(z);
    }
    int k;
    cin >> k;
    v.erase(v.begin()+k);
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}