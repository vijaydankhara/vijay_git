// destructor
// destructor call when all funcation are call and complate [ Tiele "~"]

#include<iostream>
using namespace std;
class VIJAY // class name
{
    int a,b,l,s,t,r;
    public :
    VIJAY()// 1."Square"
    {
     cout << "Enter The Value :- " ;
     cin >> l;
     s=l*l;
     cout << "Area Of Square :- " << s <<"\n";
    
    }
 
   VIJAY(int) // 2. "Rectangle"
    {
     cout << "\nEnter The Frist Value :- " ;
     cin >> l;
     cout << "Enter The Second Value :- " ;
     cin >> a;
     b=l*a;
     cout << "Area Of Rectangle :- " << b <<"\n";
    }


    VIJAY(double)// 3. "TriAngle"
    {
     cout << "\nEnter The Frist Value :- " ;
     cin >> l;
     cout << "Enter The Second Value :- " ;
     cin >> b;
     t=l*b/2;
     cout << "Area Of TriAngle :- " << t <<"\n" ;
    }

    VIJAY(int a,int b)// 4. "Circle"
    {
     cout << "\nEnter The Value :- " ;
     cin >> r;   
     a=20/7*r*r;
     cout << "Area Of Circle :- " << a <<"\n";
    }

    ~ VIJAY()
    {
        cout << "........ || DESTRUCTOR CLASS CALL ||........ \n ";
    }

    int get()
    {
        return a;
    }
};

int main()
{
    VIJAY vd,vd1(10),vd2(5.5),vd3(1,5);
    cout << "\n value of is a : " << vd1.get() << "\n";
    return 0;
}

