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


int main()
{
    // Passing value to Student() Constructor;
    Student rahim(1, 7, 4.17);
    Student karim(4, 6, 4.67);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    
    return 0;
}
