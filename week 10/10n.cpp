#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cda(vector <int> v)
{
    for(int i = 0; i < v.size()/2; i++)
    {
        if(v[i] != v[v.size()-i-1])
        return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    vector <int> v;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    bool target = false;
    while(next_permutation(v.begin(), v.end()))
    {
        if(cda(v))
        {
            target = true;
            for(auto x : v)
            {
                cout << x << " ";
            }
            break;
        }
    }
    if(!target)
    {
        cout << "Impossible";
    }
    return 0;
}