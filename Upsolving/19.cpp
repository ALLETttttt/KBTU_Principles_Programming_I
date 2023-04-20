#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; i++)
    {
        int z = i;
        
        while(z > 0)
        {
            if(z % 10 == 5)
            {
                cout << i << " ";
                break;   
            }
            z /= 10; 
               
        }
        
    }
    return 0;
}