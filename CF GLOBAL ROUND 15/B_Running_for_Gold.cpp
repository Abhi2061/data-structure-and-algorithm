// Problem link : https://codeforces.com/contest/1552/problem/B


#include <bits/stdc++.h>
#define ed "\n"
using namespace std;
using ll = long long;

bool superior(vector<int> a, vector<int> b)
{
    int cntA = 0, cntB = 0;

    for (int i = 0; i < 5; i++)
    {
        if (a[i] > b[i])
            cntB++;
        else
            cntA++;
    }

    return cntA > cntB;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n + 1, vector<int>(5));

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < 5; j++)
                cin >> A[i][j];
        }

        int s = 1, ans;

        for (int i = 2; i <= n; i++)
        {
            if (!superior(A[s], A[i]))
                s = i;
        }

        ans = s;

        for (int i = 1; i <= n; i++)
        {
            if (s != i and !superior(A[s], A[i]))
            {
                ans = -1;
                break;
            }
        }

        cout << ans << ed;
    }
    return 0;
}