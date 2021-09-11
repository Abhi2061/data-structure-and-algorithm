// Problem link : https://www.codechef.com/LTIME98B/problems/BUTYPAIR


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
        int n;
        cin >> n;

        vector<int> A(n);

        input(A);

        map<int, int> mp;

        for (int it : A)
            mp[it]++;

        ll ans = 0;

        for (int i = 0; i < n - 1; i++)
        {
            mp[A[i]]--;
            ans += (n - i - 1 - mp[A[i]]);
        }

        ans *= 2;

        cout << ans << ed;
    }
    return 0;
}