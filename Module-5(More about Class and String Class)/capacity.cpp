#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string s = "Hello wordl";
    // s.clear();
    // cout << s.size() << endl;
    // cout << s.max_size() << endl;
    // cout << s.empty() << endl;

    string s;
    cin >> s;
    cout << s.size() << endl;
    s.resize(20, 'Z');
    cout << s << endl;
    return 0;
}