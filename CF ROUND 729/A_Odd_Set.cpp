// Problem link : https://codeforces.com/contest/1542/problem/A


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
        int n, cntE = 0, cntO = 0, a;
        cin >> n;

        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a;

            if (a % 2)
                cntE++;
            else
                cntO++;
        }

        if (cntE == cntO)
            cout << "Yes" << ed;
        else
            cout << "No" << ed;
    }
    return 0;
}