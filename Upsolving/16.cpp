#include <iostream>
using namespace std;
bool CheckYear(int y)
{
    return y >= 1970 && 2035 >= y;
}
bool CheckMonth(int m)
{
    return m >= 1 && 12 >= m;
}
bool CheckDate(int d, int m)
{
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return d >= 1 && d <= days[m-1];
}
bool CheckALL(int d, int m, int y)
{
    return CheckYear(y) && CheckMonth(m) && CheckDate(d, m);
}
int main()
{
    int d, m, y;
    cin >> d >> m >> y;
    if(CheckALL(d, m, y))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}