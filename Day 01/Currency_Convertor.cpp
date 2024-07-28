#include<iostream>
using namespace std;

void ruppee_to_pound(int a,int b)
{
    float ruppee;
    float pound;
    cout<<"Enter amount in ruppee: ";
    cin>>ruppee;
    pound = 0.0094*ruppee;
    cout<<"pound = "<<pound<<endl;
}

void pound_to_ruppee(int a, int b)
{
    float ruppee;
    float pound;
    cout<<"Enter amount in pound: ";
    cin>>pound;
    ruppee = pound/0.0094;
    cout<<"Ruppee: "<<ruppee<<endl;
}

void ruppee_to_USDollar(int a,int b)
{
    float ruppee;
    float USDollar;
    cout<<"Enter amount in ruppees: ";
    cin>>ruppee;
    USDollar = ruppee/83.5;
    cout<<"Us Dollar : "<<USDollar<<endl;
}

void USDollar_to_Ruppee(int a, int b)
{
    float ruppee;
    float USDollar;
    cout<<"Enter amount in US Dollar: ";
    cin>>USDollar;
    ruppee = USDollar*83.5;
    cout<<"Ruppee : "<<ruppee<<endl;
}

void ruppee_to_Yuan(int a, int b)
{
    float ruppee;
    float yuan;
    cout<<"Enter amount in ruppee: ";
    cin>>ruppee;
    yuan = ruppee/11.48;;
    cout<<"yuan : "<<yuan<<endl;
}

void Yuan_to_ruppee(int a, int b)
{
    float ruppee;
    float yuan;
    cout<<"Enter amount in yuan: ";
    cin>>yuan;
    yuan = ruppee*11.48;;
    cout<<"ruppee : "<<ruppee<<endl;
}
int main()
{
    int choice,x,y;
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            ruppee_to_pound(x,y);
            break;
        }
        
        case 2: 
        {
            pound_to_ruppee(x,y);
            break;
        }
        case 3:
        {
            ruppee_to_USDollar(x,y);
            break;
        }
        case 4:
        {
            USDollar_to_Ruppee(x,y);
            break;
        }
        
        case 5:
        {
            ruppee_to_Yuan(x,y);
            break;
        }
        
        case 6:
        {
            Yuan_to_ruppee(x,y);
            break;
        }
        
        default:
        {
            cout<<"Enter valid choice...";
        }
    }
    return 0;
}