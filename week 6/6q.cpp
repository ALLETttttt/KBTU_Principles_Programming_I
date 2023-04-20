#include <iostream>
#include <cmath>
using namespace std;
void pos(float a, float b)
{
    cout << (b*100/a);
}
int main()
{
    float x, y;
    cin >> x >> y;
    pos(x, y);

}