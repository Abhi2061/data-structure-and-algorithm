// Problem link : https://www.codechef.com/START5B/problems/TOTCRT


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

        string code;
        ll num;
        unordered_map<string, ll> mp;
        vector<int> cnt;

        for (int i = 0; i < 3 * N; i++)
        {
            cin >> code;
            cin >> num;

            mp[code] += num;
        }

        for (auto it : mp)
            cnt.push_back(it.second);

        sort(cnt.begin(), cnt.end());

        for (auto it : cnt)
            cout << it << " ";

        cout << ed;
    }
    return 0;
}