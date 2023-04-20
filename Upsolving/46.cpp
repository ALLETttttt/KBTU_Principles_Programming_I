#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    if(n == 0 || m == 0)
    {
        cout << "error";
        return 0;
    }
    string s[n];
    int b[n];
    for(int i = 0; i < n; i++)
    {
        b[i] = 0;
        string st;
        cin >> st;
        s[i] = st;
        for(int j = 0; j < m; j++)
        {
            int z;
            cin >> z;
            b[i] += z;
        }
        cout << s[i] << " - " << b[i] << endl;
    }
    int k = 0;
    string ans = "";
    for(int i = 0; i < n; i++)
    {
        if(b[i] > k)
        {
            k = b[i];
            ans = s[i];
        }
    }
    cout << "The best:" << "\n";
    cout << ans << " " << k;
    return 0;
}