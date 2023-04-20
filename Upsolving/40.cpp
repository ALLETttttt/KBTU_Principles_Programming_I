#include <iostream>
using namespace std;
bool regret(int i, int j, int n, int m)
{
    return i + j == n + m || i - j == n - m || i == n || j == m;
}
int main()
{
    int n, m;
    cin >> n >> m;
    char a[8][8];
    if(n >= 8 || m >= 8)
    {
        cout << "Impossible";
        return 0;
    }
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            a[i][j] = '*';
        }
    }
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(regret(i, j, n, m))
            {
                a[i][j] = '2';
            }
            a[n][m] = '1';
        }
    }
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}