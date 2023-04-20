#include <iostream>
using namespace std;
int main()
{
    int ant = 0, bnt = 0;
    char a[15], b[15];
    for(int i = 0; i < 15; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < 15; i++)
    {
        cin >> b[i];
    }
    for(int i = 0; i < 15; i++)
    {
        if(a[i] == b[i])
        {
            continue;
        }
        else if((a[i] == 'P' && b[i] == 'R') || (a[i] == 'S' && b[i] == 'P') || (a[i] == 'R' && b[i] == 'S'))
        {
            ant++;
        }
        else
        {
            bnt++;
        }
    }
    if(ant == bnt)
    {
        cout << "Friendship";
    }
    else if(ant > bnt)
    {
        cout << "First player wins!";
    }
    else if(ant < bnt)
    {
        cout << "Second player wins!";
    }
    return 0;
}