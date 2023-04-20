#include <iostream>
using namespace std;
int cnt = 0;
int count[100000], visited[100000];

void unique(int a[], int b[], int n){
    for (int i = 0; i < n; i++){
        count[a[i]]++;
        visited[a[i]] = 1;
    }
    for (int i = 0; i < n; i++){
        if (visited[b[i]] == 1 && count[b[i]] > 0){
            count[b[i]]--;
            cnt++;
        }
    }
    
    cout << cnt;
}
int main (){
    int n, cnt = 0;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int j = 0; j < n; j++){
        cin >> b[j];
    }
    unique(a, b, n);
    return 0;
}
