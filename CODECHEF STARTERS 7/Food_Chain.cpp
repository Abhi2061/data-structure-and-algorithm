// Problem link : https://www.codechef.com/START7B/problems/FODCHAIN


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
        int E, K;
        cin >> E >> K;

        int cnt = 0;

        while (E)
        {
            E /= K;
            cnt++;
        }

        cout << cnt << ed;
    }
    return 0;
}