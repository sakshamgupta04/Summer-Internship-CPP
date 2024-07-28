#include<iostream>
using namespace std;
int main()
{
    //braced initializers
    //variable may contain random garbage value. Warning
    int elephant_count;
    int lion_count{}; //Initializes to zero
    int dog_count{10}; //Initializes to 10
    int cat_count{15}; //Initializes to 15
    //Can use expression a initializer
    int domesticated_animals{dog_count + cat_count};
    // int new_member{doesn't exist};
    //int narrowing conversion {2.9}; // compiler error
    cout<<"elephant count: "<< elephant_count <<endl;
    cout<<"lion count: "<< lion_count << endl;
    cout<<"Dog count: "<< dog_count << endl;
    cout<<"Cat COunt: "<< cat_count << endl;
    cout<<"Domesticated animal count: "<<domesticated_animals<<endl;
    return 0;
}