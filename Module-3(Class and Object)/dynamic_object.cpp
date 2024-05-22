#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        int roll;
        int cls;
        double gpa;
        Student(int roll, int cls, double gpa)
        {
            this->roll = roll;
            this->cls = cls;
            this->gpa = gpa;
        }
};
Student *fun()
{
    Student *rahim = new Student(1, 1, 4.99);
    return rahim;
}
int main()
{
    // Student *rahim  = new Student(242, 5, 4.99);
    // cout << rahim->cls << " " << rahim->roll << " " << rahim->gpa << endl;

    Student *ans = fun();
    cout << ans->cls << " " << ans->roll << " " << ans->gpa << endl;
    delete ans;
    cout << ans->cls << " " << ans->roll << " " << ans->gpa << endl;
    return 0;
}