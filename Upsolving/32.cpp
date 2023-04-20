#include <iostream>
using namespace std;
int main()
{
    int n, c1 = 0, c2 = 0, c3 = 0;
    cin >> n;
    char a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
       if(a[i] == 'O')
       {
           c1++;
       }
       if(a[i] == 'D')
       {
           c2++;
       }
       if(a[i] == 'H')
       {
           c3++;
       }
    }
    int q = c1/3, w = c2/3, e = c3/3;
    cout << "Orks: " << q << "\n";
    cout << "Dragons: " << w << "\n";
    cout << "Humans: " << e << "\n"; 
}