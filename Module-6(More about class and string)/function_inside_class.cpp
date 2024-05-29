#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        Person(string name, int age)
        {
            this->name =name;
            this->age = age;
        }
        void showDetails()
        {
            cout << this->name << " " << this->age << endl;
        }
};
int main()
{
    Person rakib("Rakibul Islam", 23);
    rakib.showDetails();
    return 0;
}