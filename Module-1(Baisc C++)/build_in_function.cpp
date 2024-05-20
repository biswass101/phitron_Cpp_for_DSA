#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;
int main()
{
    // int a, b;
    // cin >> a >> b;
    // int mn= min(a, b);
    // int mx = max(a, b);
    // cout << mn << " " << mx << endl;

    // int a, b, c, d; cin >> a >> b >> c >> d;
    // int mn = min({a, b, c, d});
    // int mx = max({a, b, c, d});

    // cout << mn << " " << mx << endl;

    int a, b; cin >> a >> b;
    swap(a, b);
    cout <<a << ' ' << b << endl;
    return 0;
}