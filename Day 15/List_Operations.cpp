#include<bits/stdc++.h>
using namespace std;
int main()
{
    int choice;
    list<int> l {1,2,5,4,8};
    list<int> l1 {2,8,3,0,9};
    cout<<"1. Reverse\n2. Sort\n3. Unique\n4. Empty\n5. Size\n6. Clear\n7. Merge\n"<<endl;
    cout<<endl<<"Enter your choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            l.reverse();
            cout<<"List After Reverse: ";
            for(int i: l)
            {
                cout<<i<<" ";
            }
            break;
        }
        case 2:
        {
            l.sort();
            cout<<"List After Sorting: ";
            for(int i: l)
            {
                cout<<i<<" ";
            }
            break;
        }
        case 3:
        {
            l.unique();
            cout<<"List to find Unique: ";
            for(int i: l)
            {
                cout<<i<<" ";
            }
            break;
        }
        case 4:
        {
            if(l.empty())
            {
                cout<<"List is Empty...";
            }
            else
            {
                break;
            }
            break;
        }
        case 5:
        {
            int length = l.size();
            cout<<"Size of list is: "<<length<<endl; 
            break;
        }
        case 6:
        {
            l.clear();
            cout<<"List After Clearing: ";
            for(int i: l)
            {
                cout<<i<<" ";
            }
            break;
        }
        case 7:
        {
            l.merge(l1);
            cout<<"List After Merging: ";
            for(int i: l)
            {
                cout<<i<<" ";
            }
            break;
        }
        default:
        {
            cout<<"Enter a valid choice....";
            break;
        }
    }
}