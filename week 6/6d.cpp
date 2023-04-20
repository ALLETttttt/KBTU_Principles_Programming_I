#include <iostream>
using namespace std;

void book(int a[], int n, int x){
    bool target = false;
    for (int i = 0; i < n; i++){
        if (a[i] == x){
            target = true;
        }
    }
    if (target == false){
        cout << "No";
    }
    else {
        cout << "Yes";
    }

}
int main (){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int x;
    cin >> x;
    book(a, n, x);
}