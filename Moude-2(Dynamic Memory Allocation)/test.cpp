#include<bits/stdc++.h>
using namespace std;

void getArray(int *arr, int sz)
{
    for(int i = 0; i < 5; i++) cout << arr[i] << " ";
}
int main()
{
    int *a = new int[5];
    for(int i = 0; i < 5; i++) cin >> a[i];
    getArray(a, 5);
    return 0;
}