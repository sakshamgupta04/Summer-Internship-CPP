#include<iostream>
using namespace std;
int main()
{
    string str = "Welcome to the MIET!";
    str.replace(3,4,"abcd");
    cout<<endl<<"String Replacement: ";
    cout<<str;

    cout<<endl<<"String Length: ";
    str.length();
    cout<<str.length();

    cout<<endl<<"String Concatenation: ";
    string str1 = "Saksham";
    string concat = str + str1;
    cout<<concat;

    cout<<endl<<"String Insertion: ";
    cout<<str.insert(4,"S");

    cout<<endl<<"String Erase";
    cout<< str.erase();
}