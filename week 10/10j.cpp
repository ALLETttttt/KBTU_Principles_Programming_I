#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector <int> v;
    for(int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        v.push_back(z);
    }
    rotate(v.begin(), v.begin() + k, v.end());
    reverse(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}