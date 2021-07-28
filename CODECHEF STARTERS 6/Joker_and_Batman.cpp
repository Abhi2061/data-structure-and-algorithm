// Problem link : https://www.codechef.com/START6B/problems/JOKRBTMN


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
        int N, M, L;
        cin >> N >> M >> L;

        vector<int> colors(N + 1, 0);

        for (int i = 1; i <= M; i++)
        {
            int n;
            cin >> n;

            for (int j = 0; j < n; j++)
            {
                int c;
                cin >> c;

                colors[c] = i;
            }
        }

        vector<int> strip(L);

        for (int &it : strip)
            cin >> it;

        int cnt = 1;

        for (int i = 1; i < L; i++)
        {
            if (colors[strip[i]] != colors[strip[i - 1]])
                cnt++;
        }

        cout << cnt << ed;
    }
    return 0;
}