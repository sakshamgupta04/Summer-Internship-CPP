#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    int choice,element,repeat;
    
    while(1)
    {
        cout<<endl<<"1. Size of Stack\n2. Insert Element into the Stack\n3. Delete Element from the Stack\n4. Top ELement of the Stack\n5. Exit\n";
        cout<<endl<<"Enter your choice: "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                cout<<endl<<"Size is: "<<s.size()<<endl;
                break;
            }
            case 2:
            {
                cout<<endl<<"Enter element to insert: "<<endl;
                cin>>element;
                s.push(element);
                // while(!s.empty())
                // {
                //     cout<<"Updated Stack: "<<s.top();
                //     s.pop();
                // }
                break;
            }
            case 3:
            {
                // while(!s.empty())
                // {
                //     s.pop();
                //     cout<<s.top()<<endl;
                // }      
                if(s.size()==0)
                {
                    cout<<endl<<"Stack already empty...";
                }
                else
                {
                s.pop();
                }
                break;      
            }
            case 4:
            {
                cout<<endl<<"Top Element is: "<<s.top()<<endl;
                break;
            }
            case 5:
            {
                break;
            }
            default:
            {
                cout<<endl<<"Enter valid command...";
            }
        }
        char ch;
            cout<<endl<<"Do you want to perform again: (Y/N)";
            cin>>ch;
            if(ch=='Y'||ch=='y')
            {
                continue;
            }
            else if(ch=='N'||ch=='n')
            {
                break;
            }
    }
}