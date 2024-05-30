#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        string num; cin >> num;
        int s_n1 = num[0] - '0' + num[1] - '0' + num[2] - '0';
        int s_n2 = num[3] - '0' + num[4] - '0' + num[5] - '0';
        s_n1 == s_n2 ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}