#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    string s;
    cin >> s;
    string s_king = s;
    reverse(s.begin(), s.end());
    if (s == s_king){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}