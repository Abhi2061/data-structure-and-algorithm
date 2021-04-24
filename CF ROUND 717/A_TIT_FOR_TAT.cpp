// Problem link : https://codeforces.com/contest/1516/problem/A

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
    cin >> T;

    while (T--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> A(n);

        for (int &it : A)
            cin >> it;

        for (int i = 0; i < n - 1; i++)
        {
            if (A[i] > 0)
            {
                if (k > A[i])
                {
                    k -= A[i];
                    A[n - 1] += A[i];
                    A[i] = 0;
                }
                else
                {
                    A[i] -= k;
                    A[n - 1] += k;
                    k = 0;
                    break;
                }
            }
        }

        for (int it : A)
            cout << it << " ";

        cout << "\n";
    }
    return 0;
}
