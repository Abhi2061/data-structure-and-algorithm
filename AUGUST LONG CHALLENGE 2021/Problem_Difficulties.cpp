// Problem link : https://www.codechef.com/AUG21B/problems/PROBDIFF

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
        map<int, int> cnt;

        for (int i = 0; i < 4; i++)
        {
            int a;
            cin >> a;

            cnt[a]++;
        }

        if (cnt.size() > 2)
            cout << 2 << ed;
        else if (cnt.size() == 2)
        {
            if (cnt.begin()->second == 2)
                cout << 2 << ed;
            else
                cout << 1 << ed;
        }
        else
            cout << 0 << ed;
    }

    return 0;
}