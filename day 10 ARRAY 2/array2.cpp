#include<iostream>
using namespace std;

//method 1: with extra space


void printArr(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
  int size;
  cout<<"enter no of elements ";
  cin>>size;
  int arr[size];
  cout<<"enter elements of array";
  for(int i=0;i<size;i++)
  {
    cin>>arr[i];
  }


  //reverse array


  //int j;
 
  //int copyArr[size]; 
  //for(int i=0;i<size;i++)
  //{
    //j=size-i-1;
   //copyArr[i]=arr[j];

  //}
  //for(int i=0;i<size;i++)
  // {
   //arr[i]=copyArr[i];
  //}
 int start=0;
 int end=size-1;
 while(start<end)
 {
  int temp=arr[start];
  arr[start]=arr[end];
  arr[end]=temp;
  start++;
  end--;
 }
 printArr(arr,size);

} 
