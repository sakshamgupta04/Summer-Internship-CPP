#include<iostream>
using namespace std;

void add(int a,int b)
{
    int sum = a+b;
    cout<< sum;
}

void add(int a,int b,int c)
{
    int sum = a+b+c;
    cout<< sum;
}

int main()
{
    int x,y,z;
    cout<<"Enter two numbers: ";
    cin>>x;
    cin>>y;
    cout<<"Sum of 2 numbers is: ";
    add(x,y);
    cout<<endl;
    cout<<"Enter three numbers: ";
    cin>>x;
    cin>>y;
    cin>>z;
    cout<<"Sum of 3 numbers is: ";
    add(x,y,z);
}

/*
Function Overloading - it lets you specify more than one function of the same name in the same scope
Polymorphism - it is the ability of the method to adjust in many forms
Compile time polymorphism - it occurs when multiple methods in a class have same name but different paramters lists.
Run time polymorphism - it occurs when a subclass provides a specific implementation of a method that is already defined in its superclass.
Overriding - */