#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, sum; cin >> n >> sum;
        int arr[n];
        bool flag = 0;
        for(int i =0; i < n;i++) cin >> arr[i];
        for(int i = 0; i < n - 2; i++)
        {
            for(int j = i + 1; j < n - 1; j++)
            {
                for(int k = j + 1; k < n; k++)
                {
                    if(arr[i] + arr[j] + arr[k] == sum)
                    {
                        flag = 1;
                        break;
                    }
                }
            }
        }

        flag ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}