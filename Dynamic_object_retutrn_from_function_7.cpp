#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll;
    int cls;
    double gpa;

    //This is Constructor. it does not need any return type as function;
    Student(int roll, int cls, double gpa){
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }

};

Student* fun()
{
    Student *karim = new Student (4, 6, 4.67);
    return karim;
}

int main()
{
    Student *karim = fun();

    //Dereferencing (*karim).roll = karim->roll;
    cout << karim->roll << " " << karim->cls << " " << karim->gpa << endl;
    
    return 0;
}
