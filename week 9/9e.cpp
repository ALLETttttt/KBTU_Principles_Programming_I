#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    int n, cnt = 0;
    cin >> n;
    map<string, int> q;
    string ker;
    for(int i = 0; i < n; i++)
    {
        cin >> ker;
        q[ker]++;
    }
    map<string, int>::iterator it;
    for(it = q.begin(); it != q.end(); it++)
    {
        if(it->second == 3)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
    

}