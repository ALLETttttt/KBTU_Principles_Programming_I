#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> v;
    int x;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for(int i = 0; i < v.size(); i++)
    {
        for(int j = 0; j < v.size()-i-1; j++)
        {
            if(v[j] > v[j+1]){
                swap(v[j], v[j+1]);
            }
        }
    }
    int k;
    cin >> k;
    v.erase(v.begin()+k, v.begin()+v.size());
    
    for(int j = 0; j < v.size(); j++)
    {
        cout << v[j] << " ";
    }
    return 0;
}
