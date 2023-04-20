#include <iostream>
using namespace std;
void printer(int l, int r)
{
    while(l < r+1)
    {
        if(l % 2 == 0)
        {
            cout << l << " ";
        }
        l++;
    }
}
int main()
{
    int l, r;
    cin >> l >> r;
    printer(l ,r);

    // int n, m;
    // cin >> n >> m;
    // for(int i = n; i <= m; i++)
    // {
    //     if(i % 2 == 0)
    //     {
    //         cout << i << " ";
    //     }
    // }
    // return 0;
}