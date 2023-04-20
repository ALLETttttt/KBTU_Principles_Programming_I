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
    int k;
    cin >> k;
    bool target = false;
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] == k)
        {
            target = true;
            break;
        }
    }
    if(target == true)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;

}