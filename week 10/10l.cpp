#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int size = n*(n+1)/2;
    vector <int> v(size);
    int betta = 0;
    for(int i = 1; i <= n; i++)
    {
        fill(v.begin() + betta, v.begin() + betta + i, i);
        betta += i;
    }
    for(auto x : v)
    {
        cout << x << " ";
    }
    return 0;
}