#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(vector <int> s, vector <int> f)
{
    int sum[2] = {0, 0};
    for(int i = 0; i < s.size(); i++)
    {
        sum[0] += s[i];
    }
    for(int i = 0; i < f.size(); i++)
    {
        sum[1] += f[i];
    }
    if(sum[0] == sum[1])
    {
        if(s.size() == f.size())
        {
            for(int i = 0; i < s.size(); i++)
            {
                if(s[i] == f[i]) continue;
                return s[i] < f[i];
            }
            return true;
        }
        return s.size() < f.size();
    }
    return sum[0] < sum[1];
}
int main()
{
    int n; 
    cin >> n;
    vector <vector<int> > v;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vector <int> vt;
        for(int j = 0; j < x; j++)
        {
            int z;
            cin >> z;
            vt.push_back(z);
        }
        v.push_back(vt);
    }
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < v.size(); i++)
    {
        for(int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}