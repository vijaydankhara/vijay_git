// 1
// 0 1 
// 0 1 0
// 1 0 1 0
// 1 0 1 0 1
#include <iostream>
using namespace std;
int main()
{
    int i=1,n=1,j;
    do
    {j=1;

        do    
        {
            cout<< n;
            if(n==0)
                {
                    n=1;
                }else
                {
                    n=0;
                }
                j++;
        } while(j<=i);
      
        cout<< "\n";
          i++;
        
    } while (i<=5);
    
}