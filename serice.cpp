#include <iostream>
using namespace std;
int main()
{
    char i,n;
     cin >> n;
     for(i=65;i<=89;i++)
        {
            cout << i;
            if((i+1)%5==0)
        {
        cout << "\n";
        }
        }
}