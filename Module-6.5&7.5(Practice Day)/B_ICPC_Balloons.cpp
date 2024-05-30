#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        int freq[26] = {};
        int cnt = 0;
        for(char ch : s)
        {
            freq[ch - 'A']++;
        }
        for(int i = 0; i < 26; i++)
        {
            if(freq[i] != 0)
            {
                if(freq[i] == 1)
                {
                    cnt += 2;
                }
                else
                {
                    cnt += freq[i] + 1;
                }

                // cout << char(i + 65) << " " << freq[i] << endl;
            }
        }

        cout << cnt << endl;
    }
    return 0;
}