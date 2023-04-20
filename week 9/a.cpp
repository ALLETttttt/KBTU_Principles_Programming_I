#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if(x + y > z)
    {
        cout << "Valid";
    }
    else
    {
        cout << "Invalid";
    }
}