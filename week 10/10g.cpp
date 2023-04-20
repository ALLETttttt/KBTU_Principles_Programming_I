#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<pair<pair<string, int>, pair<string, int> >, bool > q;
    for(int i = 0; i < n; i++)
    {
        string s1; cin >> s1;
        int num1; cin >> num1;

        string s2; cin >> s2;
        int num2; cin >> num2;

        pair<string, int> q1 = make_pair(s1, num1);
        pair<string, int> q2 = make_pair(s2, num2);

        auto team = make_pair(q1, q2);
        q[team] = true;
    }
    for(auto team : q)
    {
        string s = team.first.first.first + " and " + team.first.second.first;
        int k = team.first.first.second + team.first.second.second;
        cout << s << " " << k << endl;
    }
    return 0;
}