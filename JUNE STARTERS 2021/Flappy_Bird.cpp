// Problem link : https://www.codechef.com/START5B/problems/FLAPPYBD


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
        bool ans = true;
        int N, H, moves = 0;
        cin >> N >> H;

        vector<int> x(N), h(N);

        for (int &it : x)
            cin >> it;

        for (int &it : h)
        {
            cin>>it;
            it -= H;
        }

        for (int i = 0; i < N; i++)
            if (x[i] <= h[i])
                ans = false;

        if (ans)
        {
            for (int i = 0; i < N; i++)
                moves = max(moves, (x[i] + h[i] + 2) / 2);

            cout << moves << ed;
        }
        else
            cout << -1 << ed;
    }
    return 0;
}