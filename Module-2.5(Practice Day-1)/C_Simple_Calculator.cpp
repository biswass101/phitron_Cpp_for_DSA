#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b; cin >> a >> b;
    long long int ans = a + b;
    cout << a << " + " << b << " = " << a + b << endl;
    ans = a * b;
    cout << a << " * " << b << " = " << a * b << endl;
    ans = a - b;
    cout << a << " - " << b << " = " << a - b << endl;
    return 0;
}