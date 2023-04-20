#include <iostream>
#include <stack>
#include <cmath>
using namespace std;
bool qwe(int x)
{
    int n = sqrt(x);
    if(n*n == x)
    {
        return true;
    }
    return false;
}
int main()
{
    string s;
    cin >> s;
    stack <char> t;
    for(int i = 0; i < s.size(); i++)
    {
        t.push(s[i]);
        if(t.size() >= 2)
        {
            int a = int(t.top()) - 48;
            char aa = t.top();
            t.pop();

            int b = int(t.top()) - 48;
            char bb = t.top();
            t.pop();

            int x = b*10 + a;
            if(x >= 10 && qwe(x))
            {
                continue;
            }
            else
            {
                t.push(bb);
                t.push(aa);
            }
        }
    }
    if(t.empty())
    {
        cout << "Stack is empty";
    }
    else
    {
        while(!t.empty())
        {
            cout << t.top();
            t.pop();
        }
    }
    return 0;
}