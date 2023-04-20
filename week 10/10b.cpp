#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
long long g()
{
    static long long n;
    long long res = 1;
    for(int i = 0; i < n; i++)
    {
        res = res * n;
    }
    n++;
    return res;
}
int main()
{
    long long n;
    cin >> n;
    vector <long long> v(n+1);
    generate(v.begin(), v.end(), g);
    for(auto x : v)
    {
        cout << x << " ";
    }
    return 0;
}
