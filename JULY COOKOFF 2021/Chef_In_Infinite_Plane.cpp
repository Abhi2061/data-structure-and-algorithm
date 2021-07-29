// Problem link : https://www.codechef.com/COOK131B/problems/CHFPLN


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
        int N;
        cin >> N;

        vector<int> A(N);

        for (int &it : A)
            cin >> it;

        map<int, int> mp;

        for (int it : A)
            mp[it]++;

        ll ans = 0;

        for (auto it : mp)
            ans += (ll)min(it.first - 1, it.second);

        cout << ans << ed;
    }
    return 0;
}