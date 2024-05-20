#include<bits/stdc++.h>
using namespace std;
int *fun()
{
    int *a = new int;
    cout << "Fun: " << a << endl;
    *a = 100;
    return a;
}
int main()
{
    //new keywords get access to heap memory
    // int x = 10;

    //dynamic-->
    // int *a = new int;
    // *a = 120;
    // cout << *a << endl;


    // float *f = new float;
    // *f = 15.53;
    // cout << *f << endl;

    int *p = fun();
    cout << "main: " << *p << endl;


    return 0;
}