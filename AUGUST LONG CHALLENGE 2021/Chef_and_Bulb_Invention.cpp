// Problem link : https://www.codechef.com/AUG21B/problems/CHFINVNT

#include <bits/stdc++.h>
#define ed "\n"
#define all(x) x.begin(), x.end()
#define input(x)       \
    for (auto &it : x) \
    cin >> it
#define output(x, y)  \
    for (auto it : x) \
    cout << it << y

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
        int N, p, K;
        cin >> N >> p >> K;

        int ans = 0;

        ans += (p % K) * (N / K);

        ans += max(0, min((N % K), (p % K)));

        ans += (p - (p % K)) / K + 1;

        cout << ans << ed;
    }

    return 0;
}