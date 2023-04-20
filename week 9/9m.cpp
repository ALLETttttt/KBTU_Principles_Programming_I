#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int n;
    cin >> n;
    queue <string> q;
    for(int i = 0; i < n; ++i)
    {
        int z;
        cin >> z;
        if(z == 1)
        {
            string s;
            cin >> s;
            q.push(s);
            cout << q.front() << endl;
        }
        else
        {
            if(q.size() > 0)
            {
                q.pop();
            }
            if(q.size() > 0)
            {
                cout << q.front() << endl;
            }
            else 
            {
                cout << "queue is empty" << endl;
            }
        }
    }
    return 0;
}