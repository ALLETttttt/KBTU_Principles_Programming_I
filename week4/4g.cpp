#include <iostream>
using namespace std;
int main (){
    int n, number = 1;
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (j == n - number){
                cout << number;
            }
            else{
                cout << ".";
            }

        }
        number++;
        cout << endl;
    }
    return 0;
}