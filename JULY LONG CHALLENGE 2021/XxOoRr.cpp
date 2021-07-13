// Problem link : https://www.codechef.com/JULY21B/problems/XXOORR


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
        int N, K, A, r, ans = 0;
        cin >> N >> K;

        vector<int> P(30, 0);

        for (int i = 0; i < N; i++)
        {
            int j = 0;
            cin >> A;

            while (A)
            {
                r = A % 2;
                P[j] += r;
                A /= 2;
                j++;
            }
        }

        for (int it : P)
        {
            ans += it / K;

            if (it % K)
                ans++;
        }

        cout << ans << ed;
    }
    return 0;
}