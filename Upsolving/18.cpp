#include <iostream>
//#include <iomanip>
using namespace std;
int main()
{
    int n, sum1 = 0, sum2 = 0;
    double sum = 0;
    while(cin >> n)
    { 
        if(n < 0)
        {
            break;
        }
        else
        {
            sum++;
            if(n % 2 == 0)
            {
                sum1++;
            }
            else
            {
                sum2++;
            }
        }
    }
    printf("%.5f %.5f",(sum1/sum) * 100, (sum2/sum) * 100);
    // cout << fixed;
    // cout << setprecision(5) << (sum1/sum) * 100 << " " << (sum2/sum) * 100;
}