#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        int roll;
        int cls;
        double cgpa;
        Student(int roll, int cls, double cgpa)
        {
            // (*this).roll = roll;
            // (*this).cls = cls;
            // (*this).cgpa = cgpa;

            this->roll = roll;
            this->cls = cls;
            this->cgpa = cgpa;
        }
};  
int main()
{
    // Student rahim;
    // rahim.roll = 23;
    // rahim.cls = 9;
    // rahim.cgpa = 2.90;

    Student rahim(29, 9, 5.01);
    cout << rahim.roll << " " << rahim.cls << " " << rahim.cgpa << endl;
    // Student karim;
    // karim.roll = 23;
    // karim.cls = 2;
    // karim.cgpa = 2.90;
    Student karim(23, 2, 2.90);
    cout << karim.roll << " " << karim.cls << " " << karim.cgpa << endl;

    return 0;
}