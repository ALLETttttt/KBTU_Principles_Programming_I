#include <iostream>
using namespace std;
int even(string s, int n)
{
    n--;
    if (n < 0) return 0;
    if(s[n] % 2 == 0){
        return 1 + even(s, n);
    }
    return even(s, n);
}
int main()
{
    string s;
    cin >> s;
    int n;
    cout << even(s, s.size());
}