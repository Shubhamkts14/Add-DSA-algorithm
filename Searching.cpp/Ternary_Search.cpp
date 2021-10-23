//TIME COMPLEXITY=O(log n)
//ternary search works only on  sorted array
//Ternary search divide the array in three part 
#include<iostream>
using namespace std;
void fill(int a[],int n)
{
    cout<<"\n enter first element : ";
    cin>>a[0];
    for(int i=1;i<n;i++)
    {
        cout<<"\n enter next element : ";
        cin>>a[i];
        if(a[i]<a[i-1])
        {
            cout<<"\n array is not sorted !!!!\t enter element greater than "<<a[i-1];  i--;
        }
    }

}
void display(int a[],int n)
{
    cout<<"\n array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    } 
}
int ternary(int a[],int n,int key)
{
    int s=0,e=n-1;
    int mid1=s+(e-s)/3;
    int mid2=e-(e-s)/3; 
    while(s<=e)
    {
        if(a[mid1]==key) return mid1+1;
        else if(a[mid2]==key)  return mid2+1;
        else if(key<a[mid1])  e=mid1-1;
        else if(key>a[mid2])  s=mid2+1;
        else 
        {
            s=mid1+1;
            e=mid2-1;
        }
    }
    return -1;
}

int main()
{
    int n,key;
    cout<<"\n enter size of array : ";
    cin>>n;
    int a[n];
    fill(a,n);
    display(a,n);
    cout<<"\n enter element to be searched :";
    cin>>key;
    int r=ternary(a,n,key);
    if(r==-1)
    cout<<"\n element not found ";
    else
    cout<<"\n element found at "<<r<<" position";

    return 0;
}
/*
OUTPUT:
enter size of array : 7

 enter first element : 12                 

 enter next element : 2

 array is not sorted !!!!        enter element greater than 12
 enter next element : 14 

 enter next element : 55 

 enter next element : 67 

 enter next element : 78

 enter next element : 84

 enter next element : 99

 array is : 12  14      55      67      78      84      99
 enter element to be searched :78

 element found at 5 position
 */
