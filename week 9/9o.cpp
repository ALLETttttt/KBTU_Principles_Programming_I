#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map <string, string> f;
    for(int i = 0; i < n; i++)
    {
        string s, t;
        cin >> s >> t;
        f[s] = t;
    }
    int k;
    cin >> k;
    for(int i = 0; i < k; i++)
    {
        string s, t;
        cin >> s >> t;
        if(f.count(s))
        {
            if(f[s] == t)
            {
                cout << "correct password" << endl;
            }
            else
            {
                cout << "password error" << endl;
            }
        }
        else
        {
            cout << "login error" << endl;
        }

    }
    return 0;

}