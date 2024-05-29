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
    Person *rakib = new Person("Rakib Hasa", 23);
    Person *sakib = new Person("Sakib Gullu", 24);

    // rakib = sakib; //error here
    // delete sakib;

    *rakib = *sakib; //correct way to copy object
    delete sakib;
    cout << rakib->name << " " << rakib->age << endl;
    return 0;
}