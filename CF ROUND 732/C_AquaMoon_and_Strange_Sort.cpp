// Problem link : https://codeforces.com/contest/1546/problem/C


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
        int n, i = 0;
        cin >> n;

        bool f = true;
        vector<int> A(n);
        map<int, int> mp;
        map<int, pair<int, int>> pos1, pos2;

        for (int &it : A)
        {
            cin >> it;
            mp[it]++;

            if (i % 2)
                pos1[it].first++;
            else
                pos1[it].second++;

            i++;
        }

        i = 0;

        for (auto it : mp)
        {
            pair<int, int> p = {it.second / 2, it.second / 2};

            if (it.second % 2)
            {
                if (i % 2)
                    p.first++;
                else
                    p.second++;
            }

            i += it.second;

            pos2[it.first] = p;

            if (pos1[it.first] != pos2[it.first])
            {
                f = false;
                break;
            }
        }

        if (f)
            cout << "YES" << ed;
        else
            cout << "NO" << ed;
    }
    return 0;
}