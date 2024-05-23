#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100001];
    while(cin.getline(str,100001))
    {
        int cnt[26] = {0};
        int len = strlen(str);
        for(int i = 0; i < len; i++)
        {
             cnt[str[i] - 'a']++;
        }
        for(int i = 0; i < 26; i++)
        {
            if(cnt[i] != 0)
            {
                while(cnt[i])
                {
                    cout << char(i + 'a');
                    cnt[i]--;
                }
            }
        }
        cout << endl;
    }
    return 0;
}