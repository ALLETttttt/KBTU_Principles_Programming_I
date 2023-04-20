#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map <string, int> q;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if(q.count(s)) cout << "user already exists" << endl;
        else 
        {
            cout << "new user added" << endl;
            q[s] = 1;
        }
    }
    return 0;
}