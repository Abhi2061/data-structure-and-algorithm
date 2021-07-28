// Problem link : https://codeforces.com/contest/1552/problem/A


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
        int n;
        cin >> n;

        string S, temp;
        cin >> S;

        temp = S;

        sort(temp.begin(), temp.end());

        int ans = 0;

        for (int i = 0; i < n; i++)
            if (S[i] != temp[i])
                ans++;

        cout << ans << ed;
    }
    return 0;
}