// Problem link : https://codeforces.com/contest/1541/problem/B


#include <bits/stdc++.h>
#define ed "\n"
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        int n, cnt = 0;
        cin >> n;

        vector<ll> A(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> A[i];

        for (int i = 1; i < n; i++)
        {
            for (int j = (A[i] - i); j <= n; j += A[i])
            {
                if (j > 0)
                {
                    if(A[i]*A[j] == i+j and i < j)
                    cnt++;
                }
            }
        }

        cout << cnt << ed;
    }
    return 0;
}