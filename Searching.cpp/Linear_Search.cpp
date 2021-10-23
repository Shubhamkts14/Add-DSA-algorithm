//TIME COMPLEXITY : O(n)
#include<iostream>
using namespace std; 
int linearsearch(int n,int a[],int key)
{
	for(int i=0;i<n;i++)
	{
		if(key==a[i])
	    return i;
	}
return -1;	
}

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

/*
OUTPUT:
enter size : 5

 enter array element : 3 45 7 89 22

 enter element to be searched : 7

 element is available at position = 3
 */
