#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int b[n];
    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        for(int j = 0; j < m; j++)
        {
            sum += a[i][j];
        }
        b[i] = sum;
    }
    int k = 0;
    for(int i = 0; i < n; i++)
    {
        if(b[i] > k)
        {
            k = b[i];
        }
    }
    cout << k;
    return 0;
}