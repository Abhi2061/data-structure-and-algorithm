// Problem link : https://www.codechef.com/START7B/problems/CEILSUM


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

        if (A == B)
            cout << 0 << ed;
        else if (B > A)
            cout << (B - A) / 2 + 1 << ed;
        else
        {
            if ((A - B) % 2)
                cout << (B - A) / 2 << ed;
            else
                cout << (B - A) / 2 + 1 << ed;
        }
    }
    return 0;
}