#include<iostream>
using namespace std;

int main()
{
    // 🔹 Character Pattern
    char ch = 'A';
    int i, j;

    for(i = 1; i <= 4; i++)
    {
        for(j = 1; j <= i; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }

    cout << endl;   // Space between patterns

    // 🔹 Hollow Rectangle
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= cols; j++)
        {
            if(i == 1 || i == rows || j == 1 || j == cols)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }






// star pattern with spaces
int a;
int b;
int na;
cout<<"enter number ";
cin>>na;
for(a=1;a<=na;a++)
{
    for(b=1;b<=na-a;b++)
    {
        cout<<" ";
    }
    for(b=1;b<=a;b++)
    {
        cout<<"*";
    }
    cout<<endl;
}

// floyds triangle
int c;
int d;
int num=1;
int no;
cout<<"enter number of rows for floyds triangle";
cin>>no;
for(c=1;c<=no;c++)
{
    for(d=1;d<=c;d++)
    {
        cout<<num<<" ";
        num++;
    }
    cout<<endl;
}



// diamond pattern
int e;
int f;      
int g;
int h;
int n;
cout<<"enter number of rows for diamond pattern";
cin>>n; 
for(e=1;e<=n;e++)
{
    for(f=1;f<=n-e;f++)
    {
        cout<<" ";
    }
    for(g=1;g<=2*e-1;g++)
    {
        cout<<"*";
    }
    cout<<endl;
}
for(e=n-1;e>=1;e--)
{
    for(f=1;f<=n-e;f++)
    {
        cout<<" ";
    }
    for(g=1;g<=2*e-1;g++)
    {
        cout<<"*";
    }
    cout<<endl;
}   
}

