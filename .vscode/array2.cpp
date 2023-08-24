//find sum of array
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int a[5],i,even,odd;
    for (i=0;i<5;i++)
        {
            cout << "ENTER ODD AND EVEN NUMBER : " ;
            cin >> a[i];
            if(a[i]%2==1)
                {
                    odd=odd+a[i];
                }else
                {
                    even=even+a[i];
                }
        }
        cout << " odd total sum : " << odd;
        cout << " even total sum : " << even;
}
