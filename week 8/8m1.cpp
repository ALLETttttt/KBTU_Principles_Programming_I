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
    for(int i = 0; i < v.size(); i++)
    {
        for(int j = 0; j < v.size()-i-1; j++)
        {
            if(v[j] > v[j+1])
            {
                swap(v[j], v[j+1]);
            }
        }
    }
    for(int j = 0; j < v.size(); j++)
    {
        if(v[j] != v[j+1])
        {
            sum += v[j];
        }
    }
    cout << sum;
    return 0;
}