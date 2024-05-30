#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1; getline(cin, s1);
    string s2; cin >> s2;
    int cnt = 0;
    while(s1.find(s2) != -1)
    {
        s1.replace(s1.find(s2), s2.size(), " ");
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}