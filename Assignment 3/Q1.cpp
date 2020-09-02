#include <iostream>
using namespace std;
class Complex
{
public:Complex(int r = 0, int i =0){
real = r;   imag = i;
}
friend istream & operator >> (istream &input,  Complex &c);
friend ostream & operator << (ostream &output, const Complex &c);
private:
int real, imag;
};
istream & operator >> (istream &input,  Complex &c)
{cout << "input real part: ";
input >> c.real;
cout << "input Imaginary Part: ";
input >> c.imag;
return input;
}
ostream & operator << (ostream &output, const Complex &c)
{output << c.real;
output << "+" << c.imag <<"i"<< endl;
return output;
}

int main()
{
   Complex c1;
   cin >> c1;
   cout << "Complex number is ";
   cout << c1;

   return 0;
}