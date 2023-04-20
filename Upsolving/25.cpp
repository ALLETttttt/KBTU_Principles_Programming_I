#include <iostream>
#include <algorithm>
using namespace std;
bool to_Palindrome(string s)
{
    if(s.size() == 1) return true;
    for(int i = 0; i < s.size()/2; i++)
    {
        if(s[i] != s[s.size()-i-1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s;
    cin >> s;
    if(to_Palindrome(s))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    
    // int n;
    // cin >> n;
    // int temp = n;
    // int b = 0;
    // while(temp != 0)
    // {
    //     b = b*10 + (temp%10);
    //     temp /= 10;
    // }
    // if(b == n)
    // {
    //     cout << "YES";
    // }
    // else
    // {
    //     cout << "NO";
    // }

    // string s, t;
    // cin >> s;
    // t = s;
    // reverse(t.begin(), t.end());
    // if(s == t)
    // {
    //     cout << "YES";
    // }
    // else
    // {
    //     cout << "NO";
    // }
}