//w.p to any name reverce
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char a[100];
    int i=0;
     cout << "ENTER THE ANY NAME : ";
     cin >> a;
     while(a[i])
     {
        i++;
     }
     cout << "REVERCE STRING NAME : ";
     while(i>=0)
        {
         cout << a[i];
         i--;
        }
}