#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int area(vector <int> v)
{
    stack <int> st;
    int n = v.size(), ans = 0, i = 0;
    v.push_back(0);
    while(i < n)
    {
        while(!st.empty() && v[st.top()] > v[i])
        {
            int t = st.top();
            int h = v[t];
            st.pop();
            if(st.empty())
            {
                ans = max(ans, h*i);
            }
            else
            {
                int len = i - st.top() - 1;
                ans = max(ans, h*len);
            }
        }
        st.push(i);
        i++;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector <int> v;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << area(v);

}