#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s[n];
    for(int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    string w1 = "", w2 = "";
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < s[i].size(); j++)
        {
            w1 += s[i][j];
            w2 += s[i][j];
        }
        reverse(w1.begin(), w1.end());
        if(w1 == w2)
        {
            cout << w1 << "\n";
            cnt++;
        }
        w1 = "";
        w2 = "";
    }
    if(cnt == 0)
    {
        cout << "NO";
    }
    return 0;
}