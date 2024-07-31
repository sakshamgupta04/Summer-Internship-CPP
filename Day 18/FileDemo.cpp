#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Opening a text file for writing you can use open() to open file.

    //ofstream my_file.open("example.txt");
    // ofstream my_file("example.txt");

    // check if the file has opened properly
    // if(!my_file)
    // {
    //     cout<<"Error opening the file..."<<end;
    // }

    //Close the file
    // my_file.close();
    
    // ofstream my_file("example.txt");
    // if(!my_file.is_open())
    // {
    //     cout<<"Error opening the file..";
    //     return 1;
    // }

    ofstream my_file("example.txt");
    if(my_file.fail())
    {
        cout<<"Error opening the file..."<<endl;
        return 1;
    }

}