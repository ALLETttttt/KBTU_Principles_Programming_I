#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n, k, cnt = 0;;
    cin >> n >> k;
    multiset<int> q;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        q.insert(a);
    }
    pair <multiset<int>::iterator, multiset <int>::iterator> rec = q.equal_range(k);
    multiset <int>::iterator it;
    for(it = rec.first; it != rec.second; it++)
    {
        cnt++;
    }
    cout << cnt;
    return 0;
    
}