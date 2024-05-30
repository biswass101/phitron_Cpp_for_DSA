#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        char section;
        double math_marks;
        int cls;
        Student(char *name, int roll, char section, double math_marks, int cls)
        {
            strcpy(this->name, name);
            this->roll = roll;
            this->section = section;
            this->math_marks = math_marks;
            this->cls = cls;
        }
};
int main()
{
    Student A("Naeem", 65, 'A', 919.99, 10);
    Student B("Rahim", 98, 'X', 814.54, 10);
    Student C("Xahim", 18, 'X', 104.54, 10);

    if(A.math_marks > B.math_marks && A.math_marks > C.math_marks)
    {
        cout << A.name << endl;
    }
    else if(B.math_marks > A.math_marks && B.math_marks > C.math_marks)
    {
        cout << B.name << endl;
    }
    else
    {
        cout << C.name << endl;
    }
    return 0;
}