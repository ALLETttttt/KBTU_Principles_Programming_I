#include <iostream>
using namespace std;
int firsts(int x)
{
    int cnt = 0;
    while(x != 0)
    {
        if(x % 2 != 0)
        {
            cnt++;
        }
        x /= 2;
    }
    return cnt;
}
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i <= n; i++)
    {
        cout << firsts(i);
    }
}