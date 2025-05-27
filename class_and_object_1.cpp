#include <bits/stdc++.h>
using namespace std;

class Student
{
public: //Privet,Protected;
    char name[100]; // 100 bytes
    int roll;       // 4 bytes
    double gpa;     // 8 bytes
};

int main()
{
    //   Student a, b;
    //   a.roll = 128;
    //   a.gpa = 4.5;

    //   char temp[100] = "Sakib";
    //   strcpy(a.name, temp);

    //   cout<<a.name<<" "<<a.roll<<" "<<a.gpa;

    // Normal Inputs
    // cin >> a.name >> a.roll >> a.gpa;
    // cin >> b.name >> b.roll >> b.gpa;


    // This is Object
    Student a, b; 

    // Taking input with Character Space
    cin.getline(a.name, 100); //Taking Character input with Space;
    cin >> a.roll >> a.gpa;
    cin.ignore(); // Ignoring Space or Enter input;

    cin.getline(b.name, 100);
    cin >> b.roll >> b.gpa;

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;

    return 0;
}
