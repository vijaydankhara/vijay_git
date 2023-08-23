// w.p print serice to odd number 1 to 50
// 2 4 6 8 10 .....46 48 50.
#include <iostream>
using namespace std;
int main()
{
    int i=1;
    do
    {
        if(i%2==0)
        cout<< " " << i;
        i++;
    } while (i<=50);
    
}