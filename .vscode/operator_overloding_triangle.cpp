// operator overloding in triangle
#include<iostream>
using namespace std;

class  triangle
{
  int base;
  int height;

public:
  void setdata (int b, int h)
  {
    base = b;
    height = h;
  }


  triangle operator+(triangle & tri)
  {
    triangle vd;
    vd.base = base + tri.base;
    vd.height = height + tri.height;
    return vd;
  }

  int getdata ()
  {
    return (base * height) / 2;
  }

};

int main ()
{
  triangle triangle1, triangle2, triangle3;

  triangle1.setdata (3,4);
  cout << "Triangle 1 value is :- " << triangle1.getdata () << endl;

  triangle2.setdata (5,6);
  cout << "Triangle 2 value is :- " << triangle2.getdata () << endl;

  triangle3 = triangle1 + triangle2;
  cout << "triangle1 + triangle2 = triangle 3 value is :- " << triangle3.getdata () << endl;


}

