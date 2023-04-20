#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;
bool asd(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b)
{
    return (a.first.first + a.first.second) < (b.first.first + b.first.second);
}
int main()
{
    int n;
    cin >> n;
    vector <pair<pair<int, int>, int> > q;
    for(int i = 1; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        q.push_back({{x, y}, i});
    }
    sort(q.begin(), q.end(), asd);
    for(auto &x : q)
    {
        cout << x.second << " ";
    }
    return 0;
}