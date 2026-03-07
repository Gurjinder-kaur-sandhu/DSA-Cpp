#include<iostream>
using namespace std;
//functions; block of code which run when it is called.....can be of any name but not reseerve keyword
//functions to print product of two numbers
void product(int a, int b)
{
    int c;
    c=a*b;
    cout<<"product is "<<c;
    cout<<endl;
}

// function to check number is even or odd

void oddeven(int i)
{
    if(i%2==0)
    {
        cout<<"even no";
    }
else{
    cout<<"odd no";
}

}
//factorial
int factorial(int n)

{
    int fact=1;
    for(int j=1;j<=n;j++)
    {
        fact=fact*j;
    }
    cout<<"factorial is"<<fact;
}
//binomial
void binomial(int n1,int r1 ){
int result;
int n1;
int r2;
int r3;
int n2;
n2=factorial(n1);
r2=factorial(r1);
r3=factorial(n1-r1);

result=n2/(r2*r3);
}

int main()
{
    int x,y,i,n;
    cout<<"enter two numbers";
    cin>>x>>y;
    product(x,y);
   cout<<"enter number";
   cin>>i;
   oddeven(i);
   cout<<endl;
   cout<<"enter value to find its fact";
   cin>>n;
   factorial(n);
   cout<<endl;

//binomial coefficient
int n1,r1,n2,r2,r3;
cout<<"enter the 2 values for binomial";
cin>>n1>>r1;
binomial(n1,r1);
}