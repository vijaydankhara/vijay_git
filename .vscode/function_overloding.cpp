// function overloding
#include<iostream>
using namespace std;


class test // test is a class name.
{
    int a,b,l,s,t,r;
    public :
    void setdata()// 1."Square"
    {
     cout << "Enter The Value :- " ;
     cin >> l;
     s=l*l;
     cout << "Area Of Square :- " << s <<"\n";
    
    }
 
   void setdata(int) // 2. "Rectangle"
    {
     cout << "\nEnter The Frist Value :- " ;
     cin >> l;
     cout << "Enter The Second Value :- " ;
     cin >> a;
     b=l*a;
     cout << "Area Of Rectangle :- " << b <<"\n";
    }


    void setdata(double)// 3. "TriAngle"
    {
     cout << "\nEnter The Frist Value :- " ;
     cin >> l;
     cout << "Enter The Second Value :- " ;
     cin >> b;
     t=l*b/2;
     cout << "Area Of TriAngle :- " << t <<"\n" ;
    }

   void setdata(int a,int b)// 4. "Circle"
    {
     cout << "\nEnter The Value :- " ;
     cin >> r;   
     a=20/7*r*r;
     cout << "Area Of Circle :- " << a <<"\n";
    }

    
};

int main()
{   test te;
    te.setdata();
    te.setdata(10);
    te.setdata(1.5);
    te.setdata(10,12);
    
}

