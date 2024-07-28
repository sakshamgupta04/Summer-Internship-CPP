#include<iostream>
using namespace std;
int main()
{
    int classes_held,classes_attended;
    float percentage;
    cout<<"Enter number of classes held: "<<endl;
    cin>>classes_held;
    cout<<"Enter number of classes attended: "<<endl;
    cin>>classes_attended;
    percentage = (classes_attended*100)/classes_held;
    cout<<"Percentage of class attended: "<<percentage<<endl;
    if(percentage<75)
    {
        cout<<"Student is not allowed to sit in the exam";
    }
    else
    {
        cout<<"Student is allowed to sit in the exam";
    }
    return 0;
}