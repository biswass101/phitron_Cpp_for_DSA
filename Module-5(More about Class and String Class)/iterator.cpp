#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    // string :: iterator it; 
    cin >> s;
    // cout << *s.begin() << endl; //a ptr
    // cout << *(s.end() - 1);

    for(auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}