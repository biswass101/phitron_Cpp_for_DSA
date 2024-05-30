#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        string x; cin >> x;
        string y; cin >> y;
        while(x.find(y) != -1)
        {
            x.replace(x.find(y), y.size(), "#");
        }
        cout << x << endl;
    }
    return 0;
}