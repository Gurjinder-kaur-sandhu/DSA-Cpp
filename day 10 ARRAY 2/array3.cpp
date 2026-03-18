//ARRAY POINTER
#include<iostream>
using namespace std;
int main()
{

// INCREEMENT AND DECREEMENT OPERATOR
int a=10;
int b=20;                                                                                                     
int *aptr=&a;
int *bptr=&b;
cout<<"bytes of a"<<aptr<<endl;
aptr++;
cout<<"bytes get update to"<<aptr<<endl;


//POINTER ARITHMETIC
//addition and subtraction of constant(used in array to access differ locations)
aptr+3;
cout<<"addition of 3"<<aptr;//4 bytes*3=12bytes
// ptr1+ptr2 (invalid)
int c=bptr-aptr;
cout<<c;
//ptr1-ptr2(valid but in same type)

}