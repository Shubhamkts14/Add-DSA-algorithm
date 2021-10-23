#include<iostream>
 
using namespace std;
 
int main()
{
    int i,j,n,temp,min;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int a[n];
    cout<<"\nEnter the elements\n";
 
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
 
    for(i=0;i<n-1;i++)
    {
        min=a[i];
        
        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
               
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
            }
        }
 
    }
 
    cout<<"\nSorted list is as follows\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
 
    return 0;
}
