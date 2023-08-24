//  
#include <iostream>
using namespace std;
void one();
void one()
{
    int i,n,sum=0;
    cin >> n;
    for(i=0;i<=n;i++)
        {
            cin >> i;
            sum=sum+i;
        }
        cout << sum;
}

int main ()
{
    one();
}