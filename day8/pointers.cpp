#include<iostream>
using namespace std;

//pass by value function
void passvalue(int x)
{
x=50;
}
//pass by reference
void passref(int *ptr)
{
    *ptr=20;
}

int main()

{
    //pointers are special variable that store address of another value
// & address of operator

int a=10;
cout<<&a;//prints the address of a 

int *ptr=&a;//store address of a
cout<<sizeof(ptr);//size of pointer

cout<<endl;

//null  ptr--- 0 address


//passing arguement
//1. pass  by value
int b=10;
passvalue(b);
cout<<"value of b"<<b;//original remains same ..copy is madee
cout<<endl;
int a1=21;   
passref(&a1);
cout<<a1;
  


}