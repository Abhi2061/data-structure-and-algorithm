// Problem link : https://codeforces.com/contest/1529/problem/B


#include <bits/stdc++.h>
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
        int n, min = INT_MAX, cnt = 1;
        cin >> n;

        vector<ll> A(n);

        for (ll &it : A)
            cin >> it;

        sort(A.begin(), A.end());

        for (int i = 1; i < n; i++)
        {
            if (abs(A[i] - A[i - 1]) < min)
                min = abs(A[i] - A[i - 1]);

            if (A[i] > 0)
            {
                if (min >= A[i])
                    cnt++;

                break;
            }
            else
                cnt++;
        }

        cout << cnt << "\n";
    }
    return 0;
}