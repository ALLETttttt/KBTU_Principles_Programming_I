#include <iostream>
using namespace std;

bool king(string s, int n){
    int cnt = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] >= '0' && s[i] <= '9'){
            cnt++;
        } 
        else{
            cnt = 0;
        }  
        if(cnt >= n){
            return true; 
        }  
        
    }
    return false;
}
int main(){
    string s;
    int n;
    cin >> s;
    cin >> n;
    if(king(s, n)){
        cout << "Valid";
    }
    else{
        cout << "Not valid";
    }
}