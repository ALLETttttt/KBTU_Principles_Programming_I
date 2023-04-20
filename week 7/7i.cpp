#include <iostream>
using namespace std;
long long sum = 0;
int oppa(long long n)
{
   
    while(cin >> n)
    {
        sum += n;
        if(n == 0) return sum;
    } 
    return oppa(n);
}
int main()
{
    int n;
    cout << oppa(n);
}