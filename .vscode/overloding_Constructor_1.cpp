// Constructor of Overloding
#include<iostream>
using namespace std;
class VIJAY // class name
{
    int a,b,l,s,t,r;
    public :
    VIJAY()// class contyructer of "Quare"
    {
     cout << "enter the value :- " ;
     cin >> l;
     s=l*l;
     cout << "area of quare :- " << s;
    }

   VIJAY(int)// class contyructer of "reqta angel"
    {
     cout << "\nenter the frist value :- " ;
     cin >> l;
     cout << "enter the second value :- " ;
     cin >> a;
     b=l*a;
     cout << "area of reqta angel :- " << b;
    }


    VIJAY(double)// class contyructer of "try angel"
    {
     cout << "\nenter the frist value :- " ;
     cin >> l;
     cout << "enter the second value :- " ;
     cin >> b;
     t=l*b/2;
     cout << "area of try angel :- " << t ;
    }

    VIJAY(int a,int b)// class contyructer of "cricle"
    {
     cout << "enter the value :- " ;
     cin >> r;   
     a=20/7*r*r;
     cout << "area of cricle :-" << a;
    }
};

int main()
{
    VIJAY vd(1,5);
}

