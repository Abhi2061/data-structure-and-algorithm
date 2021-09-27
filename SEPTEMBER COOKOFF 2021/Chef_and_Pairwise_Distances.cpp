// Problem link : https://www.codechef.com/COOK133B/problems/PAIRDIST


#include <bits/stdc++.h>
#define ed "\n"
#define all(x) x.begin(), x.end()
#define input(x)       \
    for (auto &it : x) \
    cin >> it
#define output(x, y)  \
    for (auto it : x) \
    cout << it << y
#define MOD 1e9 + 7

using namespace std;
using ll = long long;

int power(ll x, ll y, ll p)
{
    int res = 1;

    x = x % p;

    if (x == 0)
        return 0;

    while (y > 0)
    {

        if (y & 1)
            res = (res * x) % p;

        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> A(N);

        input(A);

        if (N > 4)
            cout << "NO" << ed;

        else
        {
            cout << "YES" << ed;

            cout << 0 << " " << A[0] << ed;

            if(N > 1)
            cout << 0 << " -" << A[1] << ed;

            if(N > 2)
            cout << A[2] << " " << 0 << ed;

            if(N > 3)
            cout << "-" << A[3] << " " << 0 << ed;
        }
    }

    return 0;
}