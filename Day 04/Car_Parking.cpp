#include<iostream>
using namespace std;
int main()
{
    int choice,car=0,bike=0,rickshaw=0;
    while(1)
    {
        cout<<"1. CAR\n2. BIKE\n3. Rickshaw\n4. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                cout<<"Car is Parked..."<<endl;
                car++;
                break;
            }
            case 2:
            {
                cout<<"Bike is Parked..."<<endl;
                bike++;
                break;
            }
            case 3:
            {
                cout<<"Rickshaw is Parked..."<<endl;
                rickshaw++;
                break;
            }
            case 4:
            {
                exit(0);
            }
            default:
            {
                cout<<"Enter a valid choice.....";
            }
        }
         char ch;
            cout<<"Do you want to perform again: (Y/N)";
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
    cout<<"Total count: \nCar: "<<car<<"\nBike: "<<bike<<"\nRickshaw: "<<rickshaw<<endl;
}