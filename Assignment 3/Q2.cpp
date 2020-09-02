#include<iostream>
using namespace std;
class Complex{
private:int real;
int img;
public:Complex(int r=0,int i=0){
    real=r;
    img=i;
}
friend Complex operator * (Complex const &,Complex const &);
void print(){
cout<<real<<"+"<<img<<"i"<<endl;}
void input()
{
cout<<"Enter real part : "<<endl;
cin>>real;
cout<<"Enter imaginary part : "<<endl;
cin>>img;
}
};
Complex operator * (Complex const &obj1,Complex const &obj2){
Complex res;
res.real=obj1.real*obj2.real;
res.img=obj1.img*obj2.img;
return res;}
int main()
{Complex c1,c2;
cout<<"Input for 1st complex number: "<<endl;
c1.input();
cout<<"Input for 2nd complex number: "<<endl;
c2.input();
Complex c3=c1*c2;
cout<<"The result is: "<<endl;
c3.print();
}