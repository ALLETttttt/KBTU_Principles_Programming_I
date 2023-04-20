#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> mp;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int x, y;
        cin >> x >> y;
        mp[x + y] = i;
    }
    map <int, int>::iterator it;
    for(it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->second << " ";
    }
    return 0;
}