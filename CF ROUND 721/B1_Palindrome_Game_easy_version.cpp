// Problem link : https://codeforces.com/contest/1527/problem/B1


#include <bits/stdc++.h>
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
        int n, cnt = 0;
        cin >> n;

        string S;
        cin >> S;

        for (char it : S)
            if (it == '0')
                cnt++;

        if (cnt == 0)
            cout << "DRAW\n";

        if (cnt == 1)
            cout << "BOB\n";

        else if (cnt % 2)
            cout << "ALICE\n";

        else
            cout << "BOB\n";
    }
    return 0;
}