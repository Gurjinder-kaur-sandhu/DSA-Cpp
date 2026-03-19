//bar need valley to trap water,larger bar on both side
//min (left large qnd right large)-height of center bar
//area=height*width width=1 of every bar
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

void trap(int *heights,int n)
{
    int leftmax[200000];
    int rightmax[200000];
    leftmax[0]=heights[0];
    rightmax[n-1]=heights[n-1];
    for(int i=1;i<n;i++)
    {
        leftmax[i]=max(leftmax[i-1],heights[i]);
        cout<<leftmax[i];
        

    }
    cout<<endl;
    for(int i=n-2;i>=0;i--)
    {
        rightmax[i]=max(rightmax[i+1],heights[i]);
    }
   int  watertrapped=0;
   for(int i=0;i<n;i++)
   {
    int current=min(leftmax[i],rightmax[i])-heights[i];
    if (current>0)
    {
        watertrapped+=current;
    }

    
   }
   cout<<watertrapped;

}
int main()
{
int n=7;
int heights[n]={ 4,2,0,6,3,2,5};
trap(heights,n);

}