#include <iostream> 
using namespace std;
int main (){
    string s;
    int cnt1 = 0;
    int cnt2 = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++){
        if (s[i] >= 97 && s[i] <= 122){
            cnt1++;
        }
        if (s[i] >= 65 && s[i] <= 90){
            cnt2++;
        }
    }
    cout << cnt1 << " " << cnt2;
    return 0;
}