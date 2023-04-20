#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> v;
    set <int> s;
    for(int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if(s.find(x) != s.end())
        {
            continue;
        }
        s.insert(x);
        v.push_back(x);
    }
    do
    {
        for(int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));
    
}