#include<iostream>
using namespace std;

void add(int a,int b)
{
    int sum = a+b;
    cout<<"Sum is: "<< add;
}

void subtract(int a,int b)
{
    int sub = a-b;
    cout<<"Sub is: "<< sub;
}

void multiply(int a, int b)
{
    int mul = a*b;
    cout<<"Multiply is: "<<mul;
}

void divide(int a, int b)
{
    int div = a/b;
    cout<<"Divide is: "<<div;
}

int main()
{
    int x,y,choice,sum,sub,mul,div;
    cout<<"Enter value of X and Y: ";
    cin>>x;
    cin>>y;
    cout<<"Enter your choice:";
    cin>>choice;
    
    switch(choice)
    {
        case 1:
        {
            add(x,y);
        }
        break;
        
        case 2:
        {
            subtract(x,y);
        }
        break;

        case 3:
        {
            multiply(x,y);
        }
        break;

        case 4:
        {
            divide(x,y);
        }
        break;

        default:
        {
            cout<<"Enter valid choice:";
        }

    }
    return 0;
}