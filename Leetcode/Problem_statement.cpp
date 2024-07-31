/* TWO NUMBERS
Ram and Mohan are two brothers. They are not good in maths. So their father decided to give some assignment as a game so that they can enjoy as well as they can learn the concept of number systems. So he gave two numbers to them. One is the sum of two numbers, x and y, and another is the product of same two numbers. Help them to write a code to find x and y. 

Note: The two numbers should be printed in ascending order. 

Input format: 
The input contains two integers in the same line separated by space, that denotes the sum of x and y and the product of x and y, respectively. 

Output format: 
The output consists of two numbers separated by space which corresponds to x and y in ascending order. 

Sample Input 1: 
5 6 

Sample Output 1: 
2 3 

Sample Input 2: 
15 50 

Sample Output 2: 
5 10  
*/

#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter value of x and y: ";
    cin>>x;
    cin>>y;
    for(int i=0;i<=y;i++)
    {
        for(int j=i+1;j<y;j++)
        {
            if(i+j==x && i*j==y)
            {
                cout<<i<<" "<<j;
            }
        }
    }
}