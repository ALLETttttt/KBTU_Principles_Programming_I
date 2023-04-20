#include <bits/stdc++.h>
using namespace std;
int main()
{ 
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
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
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
    
}