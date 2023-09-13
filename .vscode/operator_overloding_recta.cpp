// operator overloding in rectangle
#include <iostream>
using namespace std;
 class rectangle
{
    int length;
    int height;
    public:
    void setdata(int len, int hei)
    {
        length = len;
        height = hei;
    }
    rectangle operator+(rectangle &rec)
    {
      rectangle vd;
      vd.length = length +rec.length;
      vd.height = height +rec.height;
      return vd;  
    }
    
    int getdata()
    {
        return  length * height;
    }

};

int main ()
{
rectangle rectangle1,rectangle2,rectangle3;
rectangle1.setdata(2,3);
cout << "rectangle 1  value is :- " << rectangle1.getdata() << endl;

rectangle2.setdata(4,5);
cout << "rectangle 2  value is :- " << rectangle2.getdata() << endl;

rectangle3 = rectangle1 + rectangle2;
cout << "rectangle1 + rectangle2 = rectangle 3 value is :- " << rectangle3.getdata() << endl;
}
