#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set <int> v;
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.insert(num);
    }
    for(auto i : v)
    {
        if(i % 2 != 0)
        {
            cout << i << " ";
        }
        
    }
    return 0;
}