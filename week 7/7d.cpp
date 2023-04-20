#include <iostream>
using namespace std;
int sum(char str[], int g, int k) {
if( g > k) return 0;
return str[g]-48 + sum(str, g+1, k);
}
int main() {
string s;
cin >> s;
char str[s.size()];
for(int i = 0; i < s.size();i++) {
str[i] = s[i];
}
int k = s.size() - 1;
cout << sum(str, 0, k);
}