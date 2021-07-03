// Problem link : https://www.codechef.com/START5B/problems/BLITZ3_2


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
        int N, A, B;
        cin >> N >> A >> B;

        cout << 2 * (180 + N) - A - B << ed;
    }
    return 0;
}