#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long sum = 0;
    set <int> v;
    for(int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        v.insert(number);
    }
    for(auto i : v)
    {
        sum += i;
    }
    cout << sum;
    return 0;
}
