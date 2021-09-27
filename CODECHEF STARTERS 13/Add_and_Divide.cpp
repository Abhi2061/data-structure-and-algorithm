// Problem link : https://www.codechef.com/START13B/problems/ADDNDIV


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

void primeFactors(int n, set<int> &S)
{
    if (n % 2 == 0)
        S.insert(2);

    while (n % 2 == 0)
        n = n / 2;

    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        if (n % i == 0)
            S.insert(i);

        while (n % i == 0)
            n = n / i;
    }

    if (n > 2)
        S.insert(n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        int a, b;
        cin >> a >> b;

        set<int> S;

        primeFactors(a, S);

        bool f = true;

        for (int it : S)
        {
            if(b%it)
            {
                f = false;
                break;
            }
        }

        if (f)
            cout << "YES" << ed;
        else
            cout << "NO" << ed;
    }

    return 0;
}