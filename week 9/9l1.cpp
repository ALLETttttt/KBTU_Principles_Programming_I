#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> v;
    for(int i = 1; i <= n; i++){
        int x, y;
        cin >> x >> y;
        v.push_back({x + y, i});
    }
    sort(v.begin(), v.end());
    for(auto &x: v){
        cout << x.second << " ";
    }
}