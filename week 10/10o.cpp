#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <string> v;
    for(int i = 0; i < n; i++)
    {
        string s = "";
        int x;
        cin >> x;
        while(x > 0)
        {
            if(x % 2 == 1)
            {
                s = '1' + s;
            }
            else
            {
                s = '0' + s;
            }
            x /= 2;
        }
        v.push_back(s);
    }
    for_each(v.begin(), v.end(), [](string s){
        cout << s;
        cout << "\n";
    });
    return 0;
}