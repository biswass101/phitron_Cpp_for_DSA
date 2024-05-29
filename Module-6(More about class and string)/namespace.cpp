#include<bits/stdc++.h>
using namespace std;
namespace Rakib
{
    int age = 2;
    void hello()
    {
        cout << "Hello from Rakib Namespace" << endl;
    }
}
namespace Sakib
{
    int age2 = 6;
    void hello2()
    {
        cout << "Hello from Sakib Namespace" << endl;
    }
}
int main()
{
    cout << Rakib :: age << endl;
    cout << Sakib :: age2 << endl;
    return 0;
}