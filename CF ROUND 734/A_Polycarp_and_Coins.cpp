// Problem link : https://codeforces.com/contest/1551/problem/A


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

        int c1, c2;

        c1 = c2 = n / 3;

        if (n % 3 == 1)
            c1++;
        else if (n % 3 == 2)
            c2++;

        cout << c1 << " " << c2 << ed;
    }
    return 0;
}
