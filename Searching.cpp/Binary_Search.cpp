//Time Complexity:log(n)
//Array must be sorted
//binary sort divide the array in two parts for searching
//best case =element at the middle

#include<iostream>
using namespace std;
//********************************************
int BS(int a[],int n, int key)
{
int start=0,end=n;

while(start<=end )
{
int mid=(start+end)/2;
if(key==a[mid])	return mid+1;
else if(key<a[mid]) end=mid-1;
else start=mid+1;
}
return -1;	
	
}

//********************************************
void fillArray(int a[],int n)
{
	cout<<"\nEnter first elements: ";
	cin>>a[0];
	//fill sorted array
	cout<<"\nEnter remaining elements in sorted order: ";
	for(int i=1; i<=n-1; i++)
	{
		cin>>a[i];
		if(a[i]<a[i-1]) 
		{
			cout<<"\nEntered value is not in sorted order : ";
			cout<<"\nEnter greater value than "<<a[i-1]<<endl;
			i--;
		}
		
	}
}

//********************************************

void display(int a[],int n)
{
	cout<<"\nArray Elements are\n";
	for(int i=0; i<=n-1; i++) cout<<a[i]<<"\t";
}


int main()
{
	int n,key;
	char ch;
	cout<<"Array Size: "; cin>>n;
	int a[n];
	fillArray(a,n);
	display(a,n);
	
	do
	{
	cout<<"\nEnter element to be searched : "; cin>>key;
	
	int ans=BS(a,n,key);
	if(ans<0) cout<<"\nelement not found";
	else cout<<"\nelement  found at "<<ans;
	
	cout<<"\n\nPress y/Y to continue"; cin>>ch;
   } while(ch=='y' || ch=='Y');
	
}
/*
Array Size: 4

Enter first elements: 11 

Enter remaining elements in sorted order: 17 35 60

Array Elements are
11      17      35      60
Enter element to be searched : 1

element not found

Press y/Y to continue
y

Enter element to be searched : 17

element  found at 2

Press y/Y to continue
n
*/
