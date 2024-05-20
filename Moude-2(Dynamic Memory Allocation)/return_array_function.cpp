#include<bits/stdc++.h>
using namespace std;
int *fun()
{
    // int a[5] = {1, 2, 3, 4, 34}; // this array will be deleted after this function call ends;
    int *a = new int[5];
    for(int i = 0; i < 5; i++) cin >> a[i];
    return a;
}
int main()
{
    int *arr = fun();
    for(int i = 0; i < 5; i++) cout << arr[i] << " ";
    return 0;
}