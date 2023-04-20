#include <iostream>
using namespace std;
int sum = 0;
int don(int n)
{
    sum += (n%10)/2;
    if (n == 0) return sum;
    return don(n/10);
}
int main()
{
    int n;
    cin >> n;
    cout << don(n);
}