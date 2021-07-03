// Problem link : https://www.codechef.com/LTIME97C/problems/REALBIN


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
        ll A, B;
        cin >> A >> B;

        while (B % 2 == 0)
            B /= 2;

        if (B != 1)
            cout << "No" << ed;
        else
            cout << "Yes" << ed;
    }
    return 0;
}