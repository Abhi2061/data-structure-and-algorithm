// Problem link : https://codeforces.com/contest/1506/problem/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int T;
    cin>>T;

    while(T--)
    {
        string S;
        int n, k;

        cin>>n>>k;

        cin>>S;

        int last_modi = -1, last_pos = -1, cnt = 0;
        bool f = false;

        for(int i=0; i<n; i++)
        {
            if(S[i] == '*')
            {
                if(!f)
                {
                    S[i] = 'x';
                    last_modi = i;
                    last_pos = i;
                    cnt++;
                    f = true;
                }
                else
                last_pos = i;
            }

            if(f && i-last_modi >= k && last_modi != last_pos)
            {
                S[last_pos] = 'x';
                last_modi = last_pos;
                cnt++;
            }
        }

        for(int i=n-1; i>=0; i--)
        {
            if(S[i] == 'x')
            break;

            if(S[i] == '*')
            {
                cnt++;
                break;
            }
        }

        cout<<cnt<<endl;
    }
    return 0;
}