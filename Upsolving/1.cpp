#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 0; i <= n; i++)
    {
        int z = i;
        while(z > 0)
        {
            if(z % 2 == 1) cnt++;
            z /= 2;
        }
        cout << cnt;
        if(i != n)
        {
            cout << ",";
        }
        cnt = 0;
    }
    
    return 0;
}