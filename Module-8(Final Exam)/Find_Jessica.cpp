#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str; getline(cin, str);
    stringstream ss(str);
    string word;
    bool flag = false;
    while(ss >> word)
    {
        if(word == "Jessica")
        {
            flag = true;
            break;
        }
    }
    flag ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}