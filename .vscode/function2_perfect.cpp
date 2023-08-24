// perfect or not perfect number 
#include <iostream>
using namespace std;
void perfect();
void perfect()
{
    int i,r,num,sum=0;
    cin >> num;
    for(i=1;i<=num;i++)
        {
            if(num%i==0)
                {
                    sum=sum+i;
                }
        }
        if((sum/2)==num)
            {
                cout << "PERFECT NUMBER";
            }else
               {
                    cout << "NOT PERFECT NUMBER";
                }
}


int main()
{
    perfect ();
}