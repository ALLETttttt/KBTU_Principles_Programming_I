#include <iostream>
#include <cmath>
using namespace std;
int main (){
    string s, t, sign = "";
    cin >> s >> t;
    for (int i = 0; i < ceil(t.size() / s.size()); i++){
        sign += s;

    }
    if (sign == t){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}