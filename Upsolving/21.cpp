#include <iostream>
using namespace std;
int main()
{
    int n, a, b, cnt = 0;
    cin >> n >> a >> b;
    int i, sum = 0;;
    i = a;
    while(cnt != n)
    {
        cout << i << " ";
        sum += i;
        i += b;
        cnt++;
    }
    cout << endl;
    cout << "sum: " << sum;
}