// Problem link : https://www.codechef.com/LTIME97C/problems/CHFRICH


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
        int A, B, x;
        cin >> A >> B >> x;

        cout << (B - A) / x << ed;
    }
    return 0;
}