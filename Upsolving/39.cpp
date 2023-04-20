#include <iostream>
using namespace std;
bool CheckCoordinates(int x, int y, int n, int m)
{
    return x >= 0 && x < n && y >= 0 && y < m;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            a[i][j] = 0;
        }
    }
    int k;
    cin >> k;
    for(int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x][y] = -1;
        for(int dx = -1; dx <= 1; dx++)
        {
            for(int dy = -1; dy <= 1; dy++)
            {
                int xx = dx + x, yy = dy + y;
                if(CheckCoordinates(xx, yy, n, m) && a[xx][yy] != -1)
                {
                    a[xx][yy]++;
                }
            }
        }
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(a[i][j] == -1)
                {
                    cout << "* ";
                }
                if(a[i][j] == 0)
                {
                    cout << ". ";
                }
                if(a[i][j] > 0)
                {
                    cout << a[i][j] << " ";
                }
            }
            cout << endl;
        }
        return 0;
    }





    // int n, m;
    // cin >> n >> m;
    // int a[n][m];
    // for(int i = 0; i < n; i++)
    // {
    //     for(int j = 0; j < m; j++)
    //     {
    //         a[i][j] = 0;
    //     }
    // }
    // int k;
    // cin >> k;
    // for(int i = 0; i < k; i++)
    // {
    //     int x, y;
    //     cin >> x >> y;
    //     a[x][y] = -1;
    // }
    // for(int i = 0; i < n; i++)
    // {
    //     for(int j = 0; j < m; j++)
    //     {
    //         if(a[i][j] == -1)
    //         {
    //             continue;
    //         }
    //         else
    //         {
    //             if(i + 1 < n)
    //             {
    //                 if(a[i+1][j] == -1)
    //                 a[i][j]++;
    //             }
    //             if(j + 1 < m)
    //             {
    //                 if(a[i][j+1] == -1)
    //                 a[i][j]++;
    //             }
    //             if(i + 1 < n && j + 1 < m)
    //             {
    //                 if(a[i+1][j+1] == -1)
    //                 a[i][j]++;
    //             }
    //             if(i - 1 >= 0)
    //             {
    //                 if(a[i-1][j] == -1)
    //                 a[i][j]++;
    //             }
    //             if(j - 1 >= 0)
    //             {
    //                 if(a[i][j-1] == -1)
    //                 a[i][j]++;
    //             }
    //             if(i - 1 >= 0 && j - 1 >= 0)
    //             {
    //                 if(a[i-1][j-1] == -1)
    //                 a[i][j]++;
    //             }
    //             if(i - 1 >= 0 && j + 1 < m)
    //             {
    //                 if(a[i-1][j+1] == -1)
    //                 a[i][j]++;
    //             }
    //             if(i + 1 < n && j - 1 >= 0)
    //             {
    //                 if(a[i+1][j-1] == -1)
    //                 a[i][j]++;
    //             }
    //         }
    //     }
    // }
    // for(int i = 0; i < n; i++)
    // {
    //     for(int j = 0; j < m; j++)
    //     {
    //         if(a[i][j] == -1)
    //         {
    //             cout << "* ";
    //         }
    //         if(a[i][j] == 0)
    //         {
    //             cout << ". ";
    //         }
    //         if(a[i][j] > 0)
    //         {
    //             cout << a[i][j] << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    // return 0;
}
