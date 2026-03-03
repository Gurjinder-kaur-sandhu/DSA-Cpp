#include<iostream>
using namespace std;
int main()
{
    //voting (if else)
    int age;
    cout<<"enter your age";
    cin >>age;
    if (age>=18)
    {
        cout<<"candidate is allowed to vote"<<endl;

    }
    else
    {
        cout<<"candidate is not allowed to vote";
    }
    


    //print the largest of 3 no
    int num1,num2,num3;
    cout<<"enter numbers";
    cin>>num1>>num2>>num3;
    if (num1>num2 && num1>>num3)
    {
        cout<<"largest number is num1"<<endl;
    }
     else if (num2>num1 && num2>num3)
    {
        cout<<"largest number is num2"<<endl;
    }
    else{
        cout<<"num3 is largest"<<endl;
    }


    
    // print number is odd or even
    int a;
    cout<<"enter value of a";
    cin>>a;
    if (a/2==0)
    {
        cout<<"even"<<endl;

    }
    else
    {
        cout<<"odd" <<endl;
    }
  

   //income tax calculator (elseif)
   float income,tax;
   cout<<"enter income (in lakhs)";
   cin>>income;

   if(income <5)
   {
    cout<<"no tax";

   }
   else if( income>5 && income<10)
   {
    cout<<"20 percent tax is implies"<<0.2*income;
   }
   else
   {
    cout<<"30 percent tax"<<0.3*income;
   }
   

// ternary operator "var = condition?statement1:statement2;"
}

//switch "switch ()
//case1:cout
//default"



