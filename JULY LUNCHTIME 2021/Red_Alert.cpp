// Problem link : https://www.codechef.com/LTIME98B/problems/REDALERT

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
        int N, D, H;
        cin >> N >> D >> H;

        vector<int> A(N);

        input(A);

        int L = 0;

        for (int it : A)
        {
            if (it > 0)
                L += it;
            else
                L = max(0, L - D);

            if (L > H)
                break;
        }

        if (L > H)
            cout << "YES" << ed;
        else
            cout << "NO" << ed;
    }
    return 0;
}