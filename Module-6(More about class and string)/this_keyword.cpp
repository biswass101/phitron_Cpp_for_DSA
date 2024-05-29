#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        Person(string name, int age)
        {
           this->name = name;
           this->age = age;
        }
};
int main()
{
    Person A("Naeem Biswass", 23);
    cout << A.name << " " << A.age << endl;
    return 0;
}