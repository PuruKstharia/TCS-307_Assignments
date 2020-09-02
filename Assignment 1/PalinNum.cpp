#include<iostream>
using namespace std;
int main()
{
    int n,d=0,r,temp;
    cout<<"Enter the number ";
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        d=(d*10)+r;
        n=n/10;

    }
    if(temp==d)
        cout<<"Number is palindrome";
    else
        cout<<"Number is not palindrome";
    return 0;
}