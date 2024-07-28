#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l {1,2,3,4};
    cout<<"List Elements: \n";
    for(int i: l)
    {
        cout<<i<<", ";
    } 
    // Adding Elements into the list
    l.push_front(10);
    l.push_back(30);
    l.push_front(20);
    l.push_back(40);

    cout<<"\nList Elements After Adding New Elements: \n";
    for(int i: l)
    {
        cout<<i<<", ";
    }

    // Displaying the front and back elements
    cout<<"\nFront Element: "<<l.front();
    cout<<"\nBack Element: "<<l.back();

    //Popping the elements from list
    l.pop_back();
    l.pop_front();
    l.pop_back();
    l.pop_front();

    cout<<"\nList Elements After Deleting New Elements: \n";
    for(int i: l)
    {
        cout<<i<<", ";
    }
}