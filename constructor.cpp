#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll;
    int cls;
    double gpa;

    //This is Constructor. it does not need any return type as function;
    Student(int r, int c, double g){
        //Setting the vaule of class;
        roll = r; 
        cls = c;
        gpa = g;
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
