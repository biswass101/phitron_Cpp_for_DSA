#include<bits/stdc++.h>
using namespace std;
void printWord(stringstream& ss)
{
    string word;
    if(ss >> word)
    {
        printWord(ss);
        cout << word << endl;
    }
}
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    //normal foward way-->
    // string word;
    // while(ss >> word)
    // {
    //     cout << word << endl;
    // }

    //forward recursive way-->
    printWord(ss);
    return 0;
}