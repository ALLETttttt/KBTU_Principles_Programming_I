#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <string> s;
    vector <int> y;
    for(int i = 0; i < n; i++)
    {
        string g; cin >> g;
        int z; cin >> z;
        s.push_back(g);
        y.push_back(z);
    }
    sort(s.begin(), s.end());
    sort(y.begin(), y.end());
    for(int i = 0; i < n; i++)
    {
        cout << s[i] << " " << y[i] << endl;
    }
    return 0;
}