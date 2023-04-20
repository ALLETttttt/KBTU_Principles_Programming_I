#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
bool ggwp(int n)
{
    if(n == -1 || n == 0|| n == 1)
    {
        return false;
    }
    if(n < 0)
    {
        n = -n;
    }
    for(int i = 2; i*i <= n; i++)
    {
        if(n % i == 0)
        return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    vector <int> v;
    for(int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        v.push_back(z);
    }
    int k = count_if(v.begin(), v.end(), ggwp);
    cout << k;  
    return 0;
}