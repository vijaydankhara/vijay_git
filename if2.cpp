// wp to difind who is gretest
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;

    cin >> a >>b >> c ;

     if((a>b)&&(a>c))
        {
        cout << " is gretest :" << a;
    }
   
    if((b>a)&&(b>c))
        {
        cout << "is gretest :"<< b;
    }
     if((c>a)&&(c>b))
    
     {
        cout << "is gretest :" << c;
    }
}