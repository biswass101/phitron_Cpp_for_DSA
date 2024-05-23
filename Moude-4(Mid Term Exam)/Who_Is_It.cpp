#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        int id;
        char name[105];
        char section;
        int total_marks;
        // Student(int id, char *name, char section, int tt)
        // {
        //     this->id = id;
        //     strcpy(this->name, name);
        //     this->section = section;
        //     this->total_marks = tt;
        // }

};
int main()
{
    int t; cin>> t;
    while(t--)
    {
        Student s[3];
        for(int i = 0; i < 3; i++)
        {
            cin >> s[i].id >> s[i].name >> s[i].section >> s[i].total_marks;
        }
        Student mx = s[0];
        for(int i = 0; i < 3; i++)
        {
            if(mx.total_marks < s[i].total_marks) mx = s[i];
        }
        // cout << mx.id << " " << mx.name <<" " << mx.section << " " << mx.total_marks << endl;
        Student mnId = mx;
        for(int i = 0; i < 3; i++)
        {
            if(mx.total_marks == s[i].total_marks)
            {
                if(mnId.id > s[i].id) mnId = s[i];
            }
        }

        cout << mnId.id << " " << mnId.name <<" " << mnId.section << " " << mnId.total_marks << endl;
    }
    return 0;
}