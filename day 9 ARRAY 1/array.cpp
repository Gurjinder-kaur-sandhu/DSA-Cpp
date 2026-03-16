#include<iostream>
using namespace std;

//function of array
void func(int arr[])
{
    arr[0]=1000;
}
void printarr(int arr[],int m)
{
 
    cout<<"elements of array are";
    for(int j=0;j<m;j++)
    {
       cout<<arr[j]<<" ";
    }
}

int main()
{
int marks[50];//1st method 
cout<<marks;
cout<<endl;
int marks1[50]={1,2,3,5,3};
cout<<marks1;      // again prints address
cout<<endl;
cout<<marks1[2]; //element
cout<<endl;


//input array
int n;

cout<<"enter size of array";
cin>>n;
cout<<endl;
int arr[n];
cout<<"enter elements of array";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}


//output array
int i;
cout<<"elements of array are";

for(int i=0;i<n;i++)
{
    cout<<arr[i];
}
cout<<endl;

//Largest of array
int max=arr[0];

for(int i=0;i<n;i++)
{
if(arr[i]>max)
{
    max=arr[i];
    
}
}

cout<<"Maximum value is"<<max; 
cout<<endl;

// minimum of array
int min=arr[0];

for(int i=0;i<n;i++)
{
if(arr[i]<min)
{
    min=arr[i];
    
}
}

cout<<"Min value is"<<min; 


cout <<endl;

//functions in array
// in this we pass array name (passing array name is equivalent to passing pointer)
int m,j;
cout<<"enter size of array";
cin>>m;
int arr1[m];
cout<<endl;
cout<<"enter elements of array";
for(j=0;j<m;j++)
{
    cin>>arr1[j];
}

func(arr1);
printarr(arr1,m);
cout<<arr1[0]<<endl;
}

