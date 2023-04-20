#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    string s, s1 = "";
    for(int i = 0; i < n/2; i++)
    {
        s = to_string(a[i]);
        s1 += s;
    }
    int sum1 = 0;
    for(int i = 0; i < s1.size(); i++)
    {
        sum1 += int(s1[i]-48);
    }
    string t, t1 = "";
    for(int i = n/2; i < n; i++)
    {
        t = to_string(a[i]);
        reverse(t.begin(), t.end());
        t1 += t;
    }
    int sum2 = 0;
    for(int i = 0; i < t1.size(); i++)
    {
        sum2 += int(t1[i]-48);
    }
    if(sum1 == sum2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}