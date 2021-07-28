// Problem link : https://www.codechef.com/START7B/problems/MAXARXOR


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
        ll N, K, L, P;
        cin >> N >> K;

        L = pow(2, N);
        P = min(L/2, K);

        cout << 2 * P * (L - 1) << ed;
    }
    return 0;
}