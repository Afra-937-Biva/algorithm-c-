#include<iostream>
using namespace std;
#define lim 200
int temp[lim];
void  Merge(int arr[],int l,int mid,int h)
{
    int i,j,k=0;
    i=l;
    j=mid+1;

    while(i<=mid && j<=h)
    {
        if(arr[i]<arr[j])
        {
            temp[k++]=arr[i++];
           // i++;
           // k++;
        }
        else
        {
           temp[k++]=arr[j++];
           // j++;
           // k++;
        }
    }
    while(i<=mid)
    {
       temp[k++]=arr[i++];
           // i++;
           // k++;
    }
    while(j<=h)
    {
       temp[k++]=arr[j++];
            //j++;
            //k++;
    }
    for(int i=l,j=0;i<=h;i++,j++)
    {
        arr[i]=temp[j];
    }
}


print (int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<' ';
    }
}
void Margesort(int arr[],int l,int h)
{
    if(l>=h)
    {
        return;
    }
    else
    {
        int mid=(l+h)/2;

        Margesort(arr,l,mid);
        Margesort(arr,mid+1,h);//recursive function

        Merge(arr,l,mid,h);//merge function
    }
}
int main()
{
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Margesort(arr,0,n-1);//divide and conqure function
    print(arr,n);//print function

    return 0;
}
