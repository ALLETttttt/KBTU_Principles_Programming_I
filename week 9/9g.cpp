#include <iostream>

#include<stack>
 
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack <char> st;
    for(int i = 0; i < s.size(); ++i)
    {        
        if(st.empty())
        {
            st.push(s[i]);
        }
        else if(s[i] == '0')
        {
            st.push('0');
        }
        else if(s[i] == '1')
        {
            if(st.top() == '1')
            {
                st.pop();
            }
            else if(st.top() == '0')
            {
                st.push('1');
            }
        }
    }
    string get = "";
    while(!st.empty())
    {
        get = st.top() + get;
        st.pop();
    }
    cout << get;
    return 0; 
}
