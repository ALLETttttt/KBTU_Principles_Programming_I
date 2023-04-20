#include <iostream>
using namespace std;
int maxi(string s)
{
    char z;
    z = s[0];
    for(int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9' && s[i] > z)
        z = s[i];
    }
    return z - '0';
}
int main(){
    string s;
    cin >> s;
    cout << maxi(s);
}