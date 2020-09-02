#include<iostream>
using namespace std;
int main()
{
    float a,b ,c;
    cout<<"Enter three numbers:";
    cin>>a>>b>>c;
    if(a>=b&&a>=c)
    {
        cout<<"largest number:"<<a;
    }
    if(b>=a&&b>=c)
    {
        cout<<"largest number:"<<b;
    }
    if(c>=b&&c>=a)
    {
        cout<<"largest number:"<<c;
    }
    return 0;
}