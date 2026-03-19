#include<iostream>
#include<algorithm>
#include<climits>


using namespace std;
void maxprofit(int *arr,int n)
{
    int bestbuy[100000];
    bestbuy[0]=INT_MAX;
    for(int i=1;i<n;i++)
    {
bestbuy[i]= min(bestbuy[i-1],arr[i-1]);
cout<<bestbuy[i]<<" ";
cout<<endl;
    }
    int maxprofit=0;
    for(int i=0;i<n;i++)
    {
int currentprofit=arr[i]-bestbuy[i];
maxprofit=max(maxprofit,currentprofit);
    }
    cout<<"maximum profit"<<maxprofit;
}

int main()
{
int n=5;
int arr[n]={7,1,5,3,6,4};

maxprofit(arr,n);
}