#include <iostream>
#include <stack>
using namespace std;
bool uff(string s)
{
    stack<char> a;
    for(int i = 0; i < s.size(); ++i)
    {
        if(s[i] == '(')
        {
            a.push(s[i]);
        }
        else{
            if(a.empty()) return false;
            else a.pop();
        }
    }
    return a.empty();
}
int main()
{
    string s;
    cin >> s;
    if(uff(s)) cout << "YES";
    else cout << "NO";
}