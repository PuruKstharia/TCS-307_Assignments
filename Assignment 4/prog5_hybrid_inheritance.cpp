#include<iostream>
using namespace std;
class Shape
{
    public:
  Shape()
  {
    cout<<"Shape class constructor"<<endl;
  }
  ~Shape()
  {
    cout<<"Shape class destructor"<<endl;
  }
};
class TwoDShape : virtual public Shape
{
    int l,b;
    public:
  TwoDShape(int length,int base )
  {
      l=length;
      b=base;
    cout<<"TwoDShape class constructor"<<endl;
  }
  ~ TwoDShape()
  {
    cout<<"TwoDShape class destructor"<<endl;
  }
  virtual  void calculateArea()
  {
    cout<<"Area of upper part and lower part of cuboid : "<<l*b<<endl;
  }
};
class ThreeDShape : virtual public Shape
{
    int l,b,h;
    public:
  ThreeDShape(int length1,int base1,int height)
  {
      l=length1;
      b=base1;
      h=height;
    cout<<"ThreeDShape class constructor"<<endl;
    }
    ~ThreeDShape()
  {
    cout<<"ThreeDShape class destructor"<<endl;
  }
 void calculateVolume()
  {
   cout<<"Volume of cuboid is : "<<l*b*h<<endl;
  }
};
class Cuboid : public TwoDShape,public ThreeDShape
{
    public:
  Cuboid(int length1,int base1,int height) : TwoDShape(length1,base1),ThreeDShape(length1,base1,height)
  {
    cout<<"Cuboid class constructor"<<endl;
  }
  ~Cuboid()
  {
    cout<<"Cuboid class destructor"<<endl;
  }
};

int main()
{
     Cuboid cb(10,20,30);
     cb.calculateArea();
     cb.calculateVolume();
}
