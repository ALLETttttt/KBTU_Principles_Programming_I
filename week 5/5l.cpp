#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    string s, t;
    cin >> s;
    t = s;
    sort(s.begin(), s.end());
    if (s == t){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    
    return 0;
}