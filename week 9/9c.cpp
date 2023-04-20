#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int z;
    map<int, int> q;
    for(int i = 0; i < n; i++)
    {
        cin >> z;
        q[z]++;
    }
    map<int, int>::iterator it;
    int cnt = 0;
    for(it = q.begin(); it != q.end(); it++)
    {
        if(it->second >= 2)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}