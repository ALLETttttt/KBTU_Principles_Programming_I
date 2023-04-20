#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector <int> v1;
    vector <int> v2;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        v1.push_back(x);
    }
    for(int i = 0; i < m; i++)
    {
        int x; cin >> x;
        v2.push_back(x);
    }
    auto v1_end = unique(v1.begin(), v1.end());
    auto v2_end = unique(v2.begin(), v2.end());

    auto v1_begin = v1.begin();
    auto v2_begin = v2.begin();

    vector <int> v;
    while (v1_begin != v1_end && v2_begin != v2_end) {
        v.push_back(*v1_begin++);
        v.push_back(*v2_begin++);
    }
    auto v_end = unique(v.begin(), v.end());
    for_each(v.begin(), v_end, [](int x){
        cout << x << " ";
    });
}