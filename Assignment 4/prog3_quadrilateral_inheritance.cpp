#include<iostream>
using namespace std;
class Quadrilateral
{
    int b1,b2,h,l1,l2;
    public:
  Quadrilateral(int length1,int length2,int base1,int base2,int height)
  {
      l1=length1;
      l2=length2;
    b1=base1;
    b2=base2;
    h=height;
    cout<<"Quadrilateral class constructor"<<endl;
  }
  void area()
  {
    cout<<"Area is : "<<((b1+b2)/2)*h<<endl;
  }
  int perimeter()
  {
   cout<<"Perimeter is : "<<l1+l2+b1+b2<<endl;
  }
};
class Trapezoid : public Quadrilateral
{
    public:
  Trapezoid(int length1,int length2,int base1,int base2,int height) : Quadrilateral(length1,length2,base1,base2,height)
  {
    cout<<"Trapezoid class constructor"<<endl;
  }
};
class Parallelogram : public Quadrilateral
{
    public:
  Parallelogram(int length1,int base1,int height) : Quadrilateral(length1,length1,base1,base1,height)
  {
    cout<<"Parallelogram class constructor"<<endl;
  }
};
class Rectangle : public Quadrilateral
{
    public:
  Rectangle(int length1,int base1):Quadrilateral(length1,length1,base1,base1,length1)
  {
    cout<<"Rectangle class constructor"<<endl;
  }
};
class Square : public Quadrilateral
{
    public:
  Square(int length1) : Quadrilateral(length1,length1,length1,length1,length1)
  {
    cout<<"Square class constructor"<<endl;
  }
};
int main()
{
   Rectangle r(10,20);
   r.area();
   r.perimeter();
   Trapezoid t(30,40,50,20,10);
    t.area();
    t.perimeter();
    Square s(20);
    s.area();
    s.perimeter();
    Parallelogram  p(30,20,10);
    p.area();
    p.perimeter();
}
