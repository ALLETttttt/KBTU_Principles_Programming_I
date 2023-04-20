#include <iostream>
using namespace std;
int main (){
    string s, main;
    cin >> s;
    int l, r, lengthen;
    cin >> l >> r;
    lengthen = r - l + 1;
    main = s.substr(l, lengthen);
    cout << main;


    

    return 0;
}
// l = 0   r = 4    lengthen = r - l + 1 = 4 - 0 + 1 = 5
// l = 1   r = 4    lengthen = 4 - 1 + 1 = 4
// l = 3   r = 4    lengthen = 4 - 3 + 1 = 2
// main = s.substr(3, 2)