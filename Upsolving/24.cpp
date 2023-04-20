#include <iostream>
using namespace std;
int main()
{
    int n, z, k = 0, cnt = 0;
    cin >> n;
    while(k < 500000)
    {
        k += (n*30)/100;
        z = (n*10)/100;
        n += z;
        cnt++;
    }
    cout << cnt;
}