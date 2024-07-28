#include<iostream>
#include<vector>
#include<numeric> //for accumulate
using namespace std;
int main()
{
    vector<int> numbers = {1,2,3,4,5};

    //Using accumulate with a lambda to sum up the elements
    int sum = accumulate(numbers.begin(), numbers.end(),0,[](int total, int n){
        return total+n;
    });
    cout<<"Sum: "<<sum<<endl; //Output: Sum:15
    return 0;
}