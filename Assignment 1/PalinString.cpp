#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str,str2;
    int i,j,len=0,flag=0;
    cout<<"Enter the string\n";
    cin>> str;
    len= str.size()-1;
    for(i=len,j=0;i>=0;i--,j++)
        str2[j]=str[i];
    if(str!=str2)
        flag=1;
    if(flag==1)
    cout<<str<<"is not palindrome\n";
    else
        cout<<str<<"is palindrome";

    return 0;

}