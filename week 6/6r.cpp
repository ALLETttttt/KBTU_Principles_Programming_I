#include <iostream>
using namespace std;

void let(string s){
    for (int i = 0; i < s.size(); i++){
        if (s[i] >= 'a' && s[i] <= 'z'){
            s[i] = s[i] - 32;
        }
        cout << s[i];
    }
}
int main (){
    string s;
    cin >> s;
    int n;
    let(s);
}