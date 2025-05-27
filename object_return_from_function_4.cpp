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

Student fun()
{
    Student karim(4, 5, 4.67);
};


int main()
{
    Student obj = fun();

    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;
    
    return 0;
}
