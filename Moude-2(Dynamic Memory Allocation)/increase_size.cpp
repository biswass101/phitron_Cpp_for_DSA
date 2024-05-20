#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int a[3] = {10, 20, 30}; // this array size is filed we cant increaase it's size;


    // int *a = new int[3];
    // for(int i = 0; i < 3; i++) cin >> a[i];
    // for(int i = 0; i < 3; i++) cout << a[i] << " ";
    // cout << endl;
    // delete[] a; //array deleted from heap memory
    // for(int i = 0; i < 3; i++) cout << a[i] << " ";

    int *a = new int[3];
    int *b = new int[3];
    for(int i = 0; i < 3; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    delete[] a;

    a = new int[5]; // size increased
    for(int i = 0; i < 3; i++)
    {
        a[i] = b[i];
    }
    delete[] b;

    a[3] = 40;
    a[4] = 234;

    for(int i = 0; i < 5; i++) cout << a[i] << " ";
    return 0;
}