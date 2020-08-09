#include<iostream>
using namespace std;
void rectangle(int m, int n){
    int i,j;
    for(i=0;i<m;i++)
    {
        if(i==0 || i==m-1)
            for(j=0;j<n;j++)
                cout<<"*";
        else
        {
            cout<<"*";
            for(j=0;j<n-2;j++)
                cout<<" ";
            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<"\n";
}
void oval(int m, int n){
    int i,j,c=0;
    for(i=0;i<m;i++)
    {
        c=0;
        if(i==0 || i==m-1)
        {
            for(j=0;j<(m+1)/3;j++)
                cout<<" ";
            for(j=0;j<(m+1)/3;j++)
                cout<<"*";
        }
        else if(i<(m+1)/3)
        {
            for(j=1;j<n/3-i;j++)
            {
                cout<<" ";
                c++;
            }
            cout<<"*";
            for(j=0;j<n-2*c-2;j++)
                cout<<" ";
            cout<<"*";
        }
        else if(i>m-((m+1)/3))
        {
            for(j=n-n/3;j<i;j++)
            {
                cout<<" ";
                c++;
            }
            cout<<"*";
            for(j=0;j<n-2*c-2;j++)
                cout<<" ";
            cout<<"*";
        }
        else
        {
            cout<<"*";
            for(j=0;j<n-2;j++)
                cout<<" ";
            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<"\n";
}
void arrow(int m, int n){
    int i,j;
    for(i=1;i<m+1;i++)
    {
        if(i>(m+1)/3)
        {
            for(j=0;j<(n)/2;j++)
                cout<<" ";
            cout<<"*";
        }
        else
        {
            for(j=i;j<=n/2;j++)
                cout<<" ";
            for(j=0;j<2*i-1;j++)
                cout<<"*";
        }
        cout<<"\n";
    }
    cout<<"\n";
}
void diamond(int m, int n){
    if(m!=n)
        cout<<"Please Enter a Valid Value for Diamond shape"<<endl;
    else
    {
        int i,j;
        for(i=0;i<m/2;i++)
        {
            for(j=i;j<n/2;j++)
                cout<<" ";
            cout<<"*";
            if(i>0){
                for(j=1;j<2*i;j++)
                    cout<<" ";
                cout<<"*";
            }
            cout<<"\n";
        }
        for(i=m-m/2;i<=m;i++)
        {
            for(j=(n+1)/2;j<i;j++)
                cout<<" ";
            cout<<"*";
            for(j=2*i;j<2*n-1;j++)
                cout<<" ";
            if(i<m)
                cout<<"*";
            cout<<"\n";
        }
    }
    cout<<"\n";
}
int main()
{
    int m,n;
    cout<<"Enter the rows and columns of shapes : ";
    cin>>m>>n;
    rectangle(m,n);
    oval(m,n);
    arrow(m,n);
    diamond(m,n);
    return 0;
}