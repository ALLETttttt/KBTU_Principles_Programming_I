#include <iostream>
#include <set>
#include <list>
using namespace std;
int main()
{
    int n, x, y;
    cin >> n;
    multiset<pair<int, int> > a;
    for(int i = 0; i < n; i++)
    {
        cin >> x >> y;
        a.insert(make_pair(x, y));
    }
    multiset<pair<int, int> > :: iterator it;
    for(it = a.begin(); it != a.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;

}