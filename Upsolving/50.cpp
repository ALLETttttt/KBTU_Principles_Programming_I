#include <iostream>
using namespace std;
int main()
{
    string s;
    while(cin >> s)
    {
        if(s.size() < 3)
        {
            continue;
        }
        else
        {
            cout << s << " ";
        }
    }
    return 0;
}