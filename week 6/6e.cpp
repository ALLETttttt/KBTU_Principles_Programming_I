#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double pifagor(int a, int b){
    return sqrt(a*a + b*b);

}
int main (){
    int x, y;
    cin >> x >> y;
    cout << setprecision(4) << pifagor(x, y);
}