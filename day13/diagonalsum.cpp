#include<iostream>
using namespace std;

void diagonal(int matrix[][5],int n)
{
/*int sum=0;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
if(i==j)
{
    sum+=matrix[i][j];
}
else if(j==n-i-1)
{
    sum+=matrix[i][j];
}
    }
}
cout<<sum;*/

//optimized
 int sum=0;
for(int i=0;i<n;i++)
{
   sum += matrix[i][i];
   if(i!=n-i-1)
   {
    sum+=matrix[i][n-i-1];
   }
  
}
 cout<<sum;
}
int main()
{
    
int matrix[5][5]={{1,2,3,4,33},
                  {5,6,7,8,33},
                {9,10,11,12,32},
                {13,14,15,16,22},
            {78,90,43,2,32}};
diagonal(matrix,5);

}