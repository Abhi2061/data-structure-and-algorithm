// Problem link : https://www.codechef.com/JULY21B/problems/EITA


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
        int d, x, y, z;
        cin >> d >> x >> y >> z;

        cout << max(7 * x, d * y + (7 - d) * z) << ed;
    }
    return 0;
}