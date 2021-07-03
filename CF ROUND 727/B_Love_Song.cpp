// Problem link : https://codeforces.com/contest/1539/problem/B


#include <bits/stdc++.h>
#define ed "\n"
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, Q;
    cin >> N >> Q;

    string S;
    cin >> S;

    vector<int> len(1, 0);

    for (char it : S)
        len.push_back(it - 'a' + 1);

    for (int i = 1; i <= N; i++)
        len[i] += len[i - 1];

    while (Q--)
    {
        int l, r;
        cin >> l >> r;

        cout << len[r] - len[l - 1] << ed;
    }
    return 0;
}