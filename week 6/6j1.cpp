#include <iostream>
using namespace std; 

int max4(int a, int b, int c, int d){
    return max(max(a, b), max(c, d));

}
int main(){
    int x, y, z, t;
    cin >> x >> y >> z >> t;
    cout << max4(x, y, z, t);
}