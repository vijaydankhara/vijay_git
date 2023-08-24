//find sum of array
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int num[5],i,sum=0;
    cout << "ENTER THE NUMBRE : ";
    for(i=0;i<5;i++)
        {
            cin >> num[i];
            sum+=num[i];
        }
        cout << " sum of : " << sum;
}
