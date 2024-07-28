#include<iostream>
using namespace std;
int main()
{
    int apple_count(5);
    int orange_count(10);
    int fruit_count (apple_count + orange_count);
    //int bad initialization (doesnt_exist3 + doesn_exist4);

    // information lost .lesss afe than braced initializers
    int narrwoing_conversion_functional(2.9);
    
    cout<<"Apple count: "<<apple_count<<endl;
    cout<<"Orange count: "<<orange_count<<endl;
    cout<<"Fruit count: "<<fruit_count<<endl;
    cout<<"Narrwoing conversion: "<< narrwoing_conversion_functional<<endl; // Will loose info
    return 0;
}