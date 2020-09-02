#include<iostream>
using namespace std;
class Complex{
private:
    int real,img;
public:
    Complex(int r=0,int i=0){
    real=r;
    img=i;}
    friend bool operator == (Complex const &,Complex const &);
    friend bool operator != (Complex const &,Complex const &);
    void input(){
    cout<<"enter real part: "<<endl;
    cin>>real;
    cout<<"enter imaginary part: "<<endl;
    cin>>img;}
    void print(){
    cout<<real<<"+"<<img<<"i"<<endl;}};
bool operator == (Complex const &obj1,Complex const &obj2){
return (obj1.real==obj2.real && obj1.img==obj2.img);
}
bool operator != (Complex const &obj1,Complex const &obj2){
return !(obj1.real==obj2.real && obj1.img==obj2.img);
}
int main(){
     Complex c1,c2,c3;
     cout<<"input 1st complex number: "<<endl;
     c1.input();
     cout<<"input 2nd complex number: "<<endl;
     c2.input();
     cout<<"1st complex number: "<<endl;
     c1.print();
     cout<<"2nd complex number: "<<endl;
     c2.print();
     if(c1==c2){
        cout<<"The two Complex number are equal!"<<endl;}
     if(c1!=c2){
        cout<<"The two Complex number are unequal!"<<endl;}
}