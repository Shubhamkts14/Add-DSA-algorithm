#include<stdio.h>

int partition(int arr[],int begin,int last)
{
     int temp,i;
    int pivot=arr[last];
    int pIndex=begin;
    for(i=begin;i<last;i++)
    {
        if(arr[i]<=pivot)
        {
            temp=arr[i];
            arr[i]=arr[pIndex];
            arr[pIndex]=temp;
            pIndex++;
        }
    }
    temp=arr[pIndex];
    arr[pIndex]=arr[last];
    arr[last]=temp;
    return pIndex;
}
void qsort(int arr[], int begin, int last)
{
     int i,j,pivot,t;
     if(begin<last)
     {
         int pIndex=partition(arr,begin,last);
         qsort(arr,begin,pIndex-1);
         qsort(arr,pIndex+1,last);
     }
}



int main()
{
    int n,arr[100],i;
    printf("Number of elements in the array: \n");
    scanf("%d",&n);
    printf("Enter %d elements: \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    qsort(arr,0,n-1);
    printf("Resultant array: \n",arr[i]);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
