#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int ,int> > v;
    int x, y;
    for(int i = 0; i < n; i++)
    {
        cin >> x >> y;
        v.push_back(make_pair(x, y));
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
    vector<pair<int, int> >::iterator it;
    for(it = v.begin(); it != v.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}