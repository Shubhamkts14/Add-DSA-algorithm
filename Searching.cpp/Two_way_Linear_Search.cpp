//TIME COMPLEXITY: O(log n)
#include<iostream>
using namespace std;
int linearsearch(int,int[],int);
int main()
{
	int n,key;
	cout<<"\n enter size : ";
	cin>>n;
	int a[n];
	cout<<"\n enter array element : ";
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<"\n enter element to be searched : ";
	cin>>key;
	int r=linearsearch(n,a,key);
	if(r==-1)
	cout<<"\n not available";
	else
	cout<<"\n element is available at position = "<<r+1;
return 0;
}
int linearsearch(int n,int a[],int key)
{
	for(int i=0,j=n-1;i<=n/2;i++,j--)
	{
		if(key==a[i])
	    return i;
		else if(key==a[j])
	    return j;
		
	}
return -1;	
}
/*
OUTPUT:
enter size : 6

 enter array element : 11 34 6 74 19 3

 enter element to be searched : 3

 element is available at position = 6
 */
