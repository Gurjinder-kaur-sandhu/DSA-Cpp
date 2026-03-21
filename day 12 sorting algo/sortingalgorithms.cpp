#include<iostream>
using namespace std;

//BUBBLE SORT
void bubblesort(int * arr,int n )
{int i;
for(i =0;i<n-1;i++)
{
    bool isswap=false;
    for(int j=0;j<n-i-1;j++)
    {
        if(arr[j]>arr[j+1])      
        {
swap(arr[j],arr[j+1]);
isswap=true;
        
        }
    }
    if(!isswap)
    {
        break ;
    }
}
cout<<"sorted array is";
for(i =0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
}


// selection sort
void selectionsort(int *arr,int n)
{
    int i;
    for(i=0;i<n-1;i++)
    {
        int minidx=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[minidx])
            {
                minidx=j;
            }
            swap(arr[j],arr[minidx]);
        }

    }
    
cout<<"sorted array is";
for(i =0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
}

//insertion sort
void insertionsort(int*arr,int n)
{int i;
for(i=1;i<n;i++){
    int current=arr[i];
    int previous=i-1;
    while(previous>=0 && arr[previous]<current)
    {
       arr[previous+1]=arr[previous];
        previous --;
    }
  arr[previous+1]=current;
}
   
cout<<"sorted array is";
for(i =0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
}


int main()
{
    int n=8;

int arr[n]={4,8,6,3,5,35,55,32};

bubblesort(arr,n);
selectionsort(arr,n);
insertionsort(arr,n);

}