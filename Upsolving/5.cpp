#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int g = (n^(m^(n+m)));
    cout << g;
    return 0;
}