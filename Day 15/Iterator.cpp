#include<iostream>
#include<list>
using namespace std;
int main()
{
    // create a list
    list<int> l = {1,2,3,4,5};

    //Create an iterator to point to the first element of the list
    list<int>::iterator itr = l.begin();
    
    // Increment itr to point to the begin 2nd element
    ++itr;
    
    //dislay the 2nd element
    cout<<"Second Element: "<<*itr<<endl;
    
    //Increment itr to point to the 4th element
    ++itr;
    ++itr;
    
    //Display the 4th element
    cout<<"Fourth Element: "<<*itr;
    
    return 0;
}