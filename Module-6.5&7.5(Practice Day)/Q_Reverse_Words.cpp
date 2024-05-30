#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; getline(cin, s);
    stringstream ss(s);
    string word;
    while(ss >> word){
        int i = 0, j = word.size() - 1;
        while(i < j)
        {
            char tmp = word[i];
            word[i] = word[j];
            word[j] = tmp;
            i++;
            j--;
        }
        for(i = 0; i < word.size(); i++)
        {
            cout << word[i];
        }
        cout << " ";
    }
    return 0;
}