#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str; cin >> str;
    int fre[26] = {0};
    for(char c : str)
    {
        fre[c - 'a']++;
    }
    for(char ch = 'a'; ch <= 'z'; ch++)
    {
        while(fre[ch - 'a'])
        {
            cout << ch;
            fre[ch - 'a']--;
        }
    }
    return 0;
}