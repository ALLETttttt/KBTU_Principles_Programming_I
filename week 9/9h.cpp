#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map <string, int> q;
    int i = 1;
    string s;
    for(int j = 0; j < n; j++)
    {
        cin >> s;
        q.emplace(s, i);
        ++i;
    }
    map <string, int>:: iterator it;
    for(it = q.begin(); it != q.end(); ++it)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}