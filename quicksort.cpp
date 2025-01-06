#include<bits/stdc++.h>
using namespace std;

void swap(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int partition(int arr[],int l,int h)
{
     int pivot=arr[h];    //pivot is last element
     int i=l-1;

     for(int j=l;j<=h;j++)
     {
         if(arr[j]<pivot)
         {
             i++;
             swap(arr,i,j);
         }
     }
     swap(arr,i+1,h);
     return i+1;
}
void quicksort(int arr[],int l,int h)
{
    if(l<h)
    {
        int pi=partition(arr,l,h);

        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,h);
    }
}

print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<' ';
    }
}

int main()
{
    int n;
    cout<<"Enter the array size:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    print(arr,n);

    return 0;
}
