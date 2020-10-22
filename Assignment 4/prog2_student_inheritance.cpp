#include<iostream>
using namespace std;
class Student
{
    public:
  Student()
  {
    cout<<"Student class constructor"<<endl;
  }
};
class underGraduateStudent : public Student
{
    public:
  underGraduateStudent()
  {
    cout<<"underGraduateStudent class constructor"<<endl;
  }
};
class GraduateStudent : public Student
{
    public:
  GraduateStudent()
  {
    cout<<"GraduateStudent class constructor"<<endl;
  }
};
class freshMan : public underGraduateStudent
{
    public:
  freshMan()
  {
    cout<<"FreshMan class constructor"<<endl;
  }
};
class Junior : public underGraduateStudent
{
    public:
  Junior()
  {
    cout<<"Junior class constructor"<<endl;
  }
};
class Senior : public underGraduateStudent
{
    public:
  Senior()
  {
    cout<<"Senior class constructor"<<endl;
  }
};
class doctoralStudent : public GraduateStudent
{
    public:
  doctoralStudent()
  {
    cout<<"DoctoralStudent class constructor"<<endl;
  }
};
class mastersStudent : public GraduateStudent
{
    public:
  mastersStudent ()
  {
    cout<<"MastersStudent  class constructor"<<endl;
  }
};

int main()
{
   mastersStudent ms;
}
