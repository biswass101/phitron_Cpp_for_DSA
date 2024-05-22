#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int *arr = new int[n];
    for(int i = 0 ;i < n; i++) cin >> arr[i];
    int mx = arr[0];
    for(int i = 1; i < n; i++) if(arr[i] > mx) mx = max(mx, arr[i]);
    cout << mx << endl;
    return 0;
}