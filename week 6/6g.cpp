#include <iostream>
using namespace std;
 
void vowel(string s){
    for (int i = 0; i < s.size(); i++){
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'A'){
            continue;
        }
        else{
            cout << s[i];
        }
    }
}
int main (){
    string s;
    getline(cin, s);
    vowel(s);
}