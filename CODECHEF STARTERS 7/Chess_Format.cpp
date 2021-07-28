// Problem link : https://www.codechef.com/START7B/problems/CHSFORMT


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
        int a, b;
        cin >> a >> b;

        if (a + b < 3)
            cout << 1 << ed;
        else if (a + b >= 3 and a + b <= 10)
            cout << 2 << ed;
        else if (a + b >= 11 and a + b <= 60)
            cout << 3 << ed;
        else
            cout << 4 << ed;
    }
    
    return 0;
}