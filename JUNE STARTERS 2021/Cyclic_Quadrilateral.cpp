// Problem link : https://www.codechef.com/START5B/problems/CYCLICQD


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
        int A, B, C, D;
        cin >> A >> B >> C >> D;

        if (A + C == 180)
            cout << "YES" << ed;
        else
            cout << "NO" << ed;
    }
    return 0;
}