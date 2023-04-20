#include <iostream>
using namespace std;
double GetPriceQualityRatio(int price, int quality){
    return 1.0*price/quality;
}
int main()
{
    int n;
    cin >> n;
    string s;
    double mx = 1e9;
    for(int i = 0; i < n; i++){
        string t;
        int p, q;
        cin >> t >> p >> q;
        double rac = GetPriceQualityRatio(p, q);
        if(mx > rac){
            mx = rac;
            s = t;
        }
    }  
    cout << s << "\n";



    // int n;
    // cin >> n;
    // string s[n];
    // double z[n];
    // for(int i = 0; i < n; i++)
    // {
    //     string st; int p, q;
    //     cin >> st >> p >> q;
    //     s[i] = st;
    //     z[i] = 1.0*p/q;
    // }
    // double k = 1e9;
    // string ans = "";
    // for(int i = 0; i < n; i++)
    // {
    //     if(k > z[i])
    //     {
    //         k = z[i];
    //         ans = s[i];
    //     }
    // }
    // cout << ans;
    // return 0;
}