// Problem link : https://www.codechef.com/JULY21B/problems/RELATIVE


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
        int g, c;
        cin >> g >> c;

        cout << (c * c) / (2 * g) << ed;
    }
    return 0;
}