#include<iostream>
using namespace std;

int linearsearch( int *arr,int sizeofarray, int key)
{
    for(int i=0;i<sizeofarray;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int binarysearch(int *arr,int sizeofarray, int key)
{
    int st=0,mid;
    int end=sizeofarray-1;
    while(st<=end)
    {
        mid=(st+end)/2;
         if (arr[mid]==key)
    {
        return mid;
    }
    else if (arr[mid]<key)
    {
        st=mid+1;
    }
else if (arr[mid>key])
    {
        end=mid-1;
    }
    }
   
    return -1;
}
int main()
{
    int sizeofarray,key;
    cout<<"enter size of array";
    cin>>sizeofarray;
    int arr[sizeofarray];
    cout<<endl;
    cout<<"enter elements of array";
    for( int i=0;i<sizeofarray;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter element for search";
    cin>>key;
   // cout<<linearsearch(arr,sizeofarray,key);
    cout<<binarysearch(arr,sizeofarray,key);
}