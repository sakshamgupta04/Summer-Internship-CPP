#include<iostream>
using namespace std;
int main()
{
    bool red_light {false};
    bool green_light{true};
    if(red_light == true)
    {
        cout<< "Stop!"<<endl;
    }
    else
    {
        cout<<"Go through!"<<endl;
    }
    if(green_light)
    {
        cout<<"the light is green!"<<endl;
    }
    else
    {
        cout<<"The light is not green!"<<endl;
    }
    //sizeof()
    cout<<"sizeof(bool) : "<< sizeof(bool) <<endl;
    //Printing out a bool
    //1 -->> true
    //0-->> false
    cout<<endl;
    cout<<"Red Light: "<<red_light<<endl;
    cout<<"Green Light: "<<green_light<<endl;
    cout<<boolalpha;
    cout<<"Red light: "<<red_light<<endl;
    cout<<"Green light: "<<green_light<<endl;
    return 0;
}