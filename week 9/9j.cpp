#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n, k;
    cin >> n;
    map<string, int> q;
    string s;
    for(int i = 0; i < n; i++)
    {
        cin >> s >> k;
        q[s] = q[s] + k;
    }
    map <string, int>::iterator it;
    for(it = q.begin(); it != q.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}