// Problem link : https://www.codechef.com/COOK130C/problems/WAV2


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

    vector<int> A(N);

    for (int &it : A)
        cin >> it;

    sort(A.begin(), A.end());

    while (Q--)
    {
        int x, ans, cnt;
        cin >> x;

        auto it = lower_bound(A.begin(), A.end(), x);

        cnt = it - A.begin();

        if (cnt < N and *it == x)
            cout << "0" << ed;

        else if ((N - cnt) % 2 == 0)
            cout << "POSITIVE" << ed;

        else
            cout << "NEGATIVE" << ed;
    }
    return 0;
}