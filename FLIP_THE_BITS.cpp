// Problem link : https://codeforces.com/contest/1504/problem/B

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
        bool f = true, change = false;
        int n, cnt1 = 0, cnt0 = 0;
        cin>>n;

        string A, B;
        cin>>A>>B;

        for(char it : A)
        {
            if(it == '0')
            cnt0++;
            else
            cnt1++;
        }

        for(int i=n-1; i>=0; i--)
        {
            if(change)
            {
                if(A[i] == B[i])
                {
                    if(cnt0 != cnt1)
                    {
                        f = false;
                        break;
                    }

                    change = false;
                    i++;
                }
                else
                {
                    if(A[i] == '0')
                    cnt0--;
                    else
                    cnt1--;
                }
            }
            else
            {
                if(A[i] != B[i])
                {
                    if(cnt0 != cnt1)
                    {
                        f = false;
                        break;
                    }

                    change = true;
                    i++;
                }
                else
                {
                    if(A[i] == '0')
                    cnt0--;
                    else
                    cnt1--;
                }
            }
        }

        if(f)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}