#include <iostream>
using namespace std;
int main (){
    string s;
    cin >> s;
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < s.size(); i++){
        int e = s[i];
        if (i % 2 == 0){
            sum1 += e;
        }else {
            sum2 += e;
        }

    } 
    if (sum1 == sum2){
        cout << "YES";
    }else {
        cout << "NO";
    }
    return 0;
}