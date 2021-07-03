// Problem link : https://www.codechef.com/START5B/problems/SLPCYCLE


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
        int L, H, cnt = 0;
        cin >> L >> H;

        string S;
        cin >> S;

        vector<int> free;

        for (char it : S)
        {
            if (it == '0')
                cnt++;
            else if (cnt)
            {
                free.push_back(cnt);
                cnt = 0;
            }
        }

        if (cnt)
            free.push_back(cnt);

        for (int it : free)
        {
            if (2 * (H - it) < H)
                H = 2 * (H - it);

            if (H <= 0)
                break;
        }

        if (H <= 0)
            cout << "YES" << ed;
        else
            cout << "NO" << ed;
    }
    return 0;
}