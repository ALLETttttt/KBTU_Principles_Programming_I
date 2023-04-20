#include <iostream>
//#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j], a[j+1]);
            }
        }
    }
    // sort(a, a + n);
    for(int j = 0; j < n; j++)
    {
        cout << a[j] << " ";
    }
    return 0;
}