#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll;
    int cls;
    double gpa;

    //This is Constructor. it does not need any return type as function;
    Student(int roll, int cls, double gpa){
        //Setting the vaule of class;
        //(this) - it is a pointer
        // (*this).roll = roll;
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }

};

Student* fun() //as we are returning address so Object type should be pointer;
{
    Student karim(4, 5, 4.67);
    Student *p = &karim; // Storing addrss in pointer variable;
    return p; //Returning the address of karim;
};


int main()
{
    Student *obj = fun();

    //This will fail to print values as Static Memory delets value automatically while returning;
    cout << obj->roll << " " << obj->cls << " " << obj->gpa << endl;
    
    return 0;
}
