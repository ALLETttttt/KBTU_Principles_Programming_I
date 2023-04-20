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
    int a, b;
    cin >> a >> b;
    v.erase(v.begin()+a, v.begin()+b+1);
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}