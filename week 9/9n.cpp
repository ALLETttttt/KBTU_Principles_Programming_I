#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    map <int, int> m;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]] = 1;
    }
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            int x;
            x = a[i]^a[j];
            if(m.count(x))
            {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}