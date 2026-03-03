#include<iostream>
using namespace std;

int main()
{
    int numbers = 10829;
    int sumdigits = 0;

    while(numbers > 0)
    {
        int lastdigits = numbers % 10;
        cout<<lastdigits;
        if (lastdigits % 2 != 0)
        {
            sumdigits += lastdigits;
        }

        numbers = numbers / 10;  
    }

    cout << "Sum = " << sumdigits << endl;



// reverse number and print result

int number=10829;
int sumdigit=0;
int result=0;
while(number>0)
{
    int lastdigit=number%10;
     result=result*10+lastdigit;
number=number/10;
}
cout<<"result"<<result<<endl;





//do while loop
/*
do 
{
increement/decreement
}
while()
*/

//wap where user can enter number till user can enter multiple of 10

int x;
cout<<"enter value";
do {
    
    cin>>x;
    if(x%10==0)
    {
        break;
    }
    x++;
}
while(true);

int y;

do {
        cout << "Enter a number (not multiple of 10): ";
        cin >> y;

        if (y % 10 == 0) {
            cout << "Multiple of 10 not allowed. Try again.\n";
        }

    } while (y % 10 == 0);

    cout << "You entered: " << y << endl;

    return 0;
}