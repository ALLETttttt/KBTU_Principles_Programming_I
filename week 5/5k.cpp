#include <iostream>
using namespace std;
int main (){
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == 97 or s[i] == 101 or s[i] == 111 or s[i] == 105 or s[i] == 117){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}                   