#include<bits/stdc++.h>
using namespace std;
int main()
{
    // open a text file for appending
    ofstream my_file("example.txt",ios::app);
    //if the file doesn't open successfully, print an error message
    if(!my_file)
    {
        cout<<"Failed to open the file for appending."<<endl;
        return 1;
    }

    //apedn multiple lines to the file
    my_file<<"Subhash 40"<<endl;
    my_file<<"Ratuja 50"<<endl;
    my_file<<"Rajesh 60"<<endl;

    //close the file
    my_file.close();
    return 0;
}