#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100]; // 100 bytes
    int roll;       // 4 bytes
    double gpa;     // 8 bytes
};

int main()
{
    //   Student a;
    //   a.roll = 128;
    //   a.gpa = 4.5;

    //   char temp[100] = "Sakib";
    //   strcpy(a.name, temp);

    //   cout<<a.name<<" "<<a.roll<<" "<<a.gpa;

    // Taking Input
    Student a, b;

    // Normal Inputs
    // cin >> a.name >> a.roll >> a.gpa;
    // cin >> b.name >> b.roll >> b.gpa;

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
