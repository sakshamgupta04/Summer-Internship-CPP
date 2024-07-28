// Write a program to find the duplicate number from the string
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str = "jhon12Doe14@gmail18.com8";
    int l = str.length();
    for(int i=0;i<l;i++)
    {
        int count=1;
        for(int j=i+1;j<l;j++)
        {
            if(isdigit(str[i]))
            {
                if(str[i] == str[j])
                {
                    count++;
                    str[j] = 'A';
                }
            }
        }
        if(count>1)
        {
            cout<<str[i]<<" is printed: "<<count<<" times..."<<endl;
        }
    }   
    return 0;
}