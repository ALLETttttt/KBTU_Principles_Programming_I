#include <iostream>
using namespace std;

void max(int a[]){
    int s = a[0];
    for (int i = 0; i < 4; i++){
        if (a[i] > s){
            s = a[i];
        }
    }
    cout << s;
}
int main (){
    int a[4];
    for (int i = 0; i < 4; i++){
        cin >> a[i];
    }
    max(a);
}