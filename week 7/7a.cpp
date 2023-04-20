#include <iostream>
using namespace std;
int goo(int n)
{
   if (n == 0) return 1;
   return 2 * goo(n - 1);
}
int main()
{
   int n;
   cin >> n;
   cout << goo(n);
}