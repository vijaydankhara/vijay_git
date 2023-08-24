// how time write number chek
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int a[9],i,j,k,c,b[9];
    for (k=0;k<=8;k++)
        {
            cin >> a[k];
        }
        for (i=0;i<=8;i++)
            {
              c=1;
              for (j=i+1;j<=8;j++)
                {
                    if(a[i]==a[j])
                        {
                            c++;
                            b[j]=0;
                        }
                }
                if(b[i]!=0)
                {
                    b[i]=c;
                    cout << "\n" << " wrete by time : " << a[i] << b[i];
                }
    
            }
    
    
    
}
//problem
