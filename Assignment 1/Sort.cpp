#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int i,j,n,temp;
    cout<<"Enter the no. of elements";
    cin>>n;
    cout<<"\nEnter the elements";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
        for(i=1;i<=n-1;i++)
        {
            temp=arr[i];
            j=i-1;
            while(temp<arr[j]&&(j>=0))
            {
                arr[j+1]=arr[j];
                j=j-1;
            }
            arr[j+1]=temp;
        }
        cout<<"\nSorted array\n";
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        return 0;

}
