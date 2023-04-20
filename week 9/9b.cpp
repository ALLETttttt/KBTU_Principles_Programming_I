#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool cmp1(int a, int b)
{
    return a < b;
}
bool cmp2(int a, int b)
{
    return a > b;
}

int main()
{
    int n;
    cin >> n;
    vector <int> v1;
    vector <int> v2;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(x % 2 == 0)
        {
            v1.push_back(x);
        }
        else
        {
            v2.push_back(x);
        }
    }
    sort(v1.begin(), v1.end(), cmp2);
    sort(v2.begin(), v2.end(), cmp1);
    for(int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    for(int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }



    //int n;
    // cin >> n;
    // vector<int> v;
    // int x;
    // for(int i = 0; i < n; i++)
    // {
    //     cin >> x;
    //     v.push_back(x);
    // }
    
    // for(int i = 0; i < v.size(); i++)
    // {
    //     for(int j = 0; j < v.size()-i-1; j++)
    //     {
    //         if(v[j] > v[j+1])
    //         {
    //             swap(v[j], v[j+1]);
    //         }
    //     }
    // }
    // for(int j = v.size()-1; j >= 0; j--)
    // {
    //     if(v[j] % 2 == 0)
    //     {
    //         cout << v[j] << " ";
    //     }
    // }
    // for(int j = 0; j < v.size(); j++)
    // {
    //     if(v[j] % 2 != 0)
    //     {
    //         cout << v[j] << " ";
    //     }
        
    // }
    // return 0;
    
    
}