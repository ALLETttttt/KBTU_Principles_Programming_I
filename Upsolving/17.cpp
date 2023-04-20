#include <iostream>
using namespace std;
int main()
{
    int n, m, b;
    cin >> n >> m >> b;
    int d = n + m;
    if((b*100/d) >= 10)
    {
        cout << "Boris, you are punished!";
    }
    else
    {
        cout << "You are my sweet baby";
    }
}