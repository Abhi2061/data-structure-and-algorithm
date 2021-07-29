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
        map<int, int> mp;

        for (int &it : A)
        {
            cin >> it;
            mp[it]++;
        }

        if (mp.begin()->first == 0)
            cout << N - mp.begin()->second << ed;
        else
        {
            int m = mp.begin()->first;
            bool f = true;

            for (auto it : mp)
            {
                if (m != it.first and (it.first + 1) / 2 <= m)
                {
                    f = false;
                    break;
                }
            }

            if (f)
                cout << N - mp.begin()->second << ed;
            else
                cout << N << ed;
        }
    }
    return 0;
}