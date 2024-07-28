#include<iostream>
#include<string>
using namespace std;
class Teacher
{
    private:
    double salary; //data hiding
    public:
    string name;
    string dept;
    
    // double salary
    string subject;

    void changeDept(string newDept)
    {
        dept = newDept;
    }

    // getter and setter method
    
    void setsalary(double s){
        salary=s;
    }
    double getsalary(){
        return salary;
    }

    void getInfo()
    {
        cout<<"Teacher name: "<<name<<endl;
        cout<<"Teacher subject: "<<subject<<endl; 
    }

    Teacher()
    {
        cout<<"Constructor is calling..."<<endl;
    }

    Teacher(string s, string d, string sub, double sal)
    {
        name = s;
        dept = d;
        subject = sub;
        salary = sal;
    }
};
int main()
{
    Teacher t1;
    t1.name = "sarang";
    t1.subject = "Math";
    t1.changeDept("CSE");
    t1.getInfo();
    cout<<t1.name<<endl;
    t1.setsalary(35000);
   cout<<t1.getsalary()<<endl;

   Teacher t2("sumedh","CSE","C++",1500000);
   t2.getInfo();
   t2.getsalary();
}