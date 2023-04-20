#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0; i < n+2; i++)
    {
        cout << '+';
    }
    cout << "\n+";
    cout << s;
    cout << "+\n";
    for(int i = 0; i < n+2; i++)
    {
        cout << '+';
    }
    


    // string s;
    // cin >> s;
    // int n = s.size()+2;
    // char max[3][n];
    // for(int i = 0; i < 3; i++)
    // {
    //     for(int j = 0; j < n; j++)
    //     {
    //         max[i][j] = '+';
    //     }
    // }
    // for(int i = 0; i < n-2; i++)
    // {
    //     max[1][i+1] = s[i];
    // }
    // for(int i = 0; i < 3; i++)
    // {
    //     for(int j = 0; j < n; j++)
    //     {
    //         cout << max[i][j];
    //     }
    //     cout << endl;
    // }
}