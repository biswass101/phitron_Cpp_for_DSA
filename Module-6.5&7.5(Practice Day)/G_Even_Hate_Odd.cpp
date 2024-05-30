#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >>n;
        int e = 0, o = 0;
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x;
            if(x % 2 == 0) e++;
            else o++;
        }
        if(o == e) cout << 0 << endl;
        else if((o + e) % 2 == 0) cout << abs(o - e) / 2 << endl;
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}