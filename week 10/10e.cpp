#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
    int n, cnt = 0;;
    cin >> n;
    map <string, double> mp;
    for(int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        for(int j = 0; j < m; j++)
        {
            string s; cin >> s;
            double count; cin >> count;
            mp[s] += count;
            cnt += count;
        }
    }
    for(auto f : mp)
    {
        cout << f.first << " " << (f.second*100)/cnt << endl; 
    }
    return 0;
}