// Problem link : https://codeforces.com/contest/1551/problem/B


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
        string S;
        cin >> S;

        vector<int> mp(26, 0);

        for (char it : S)
            mp[it - 'a']++;

        int c1 = 0, c2 = 0;
        bool f = false;

        for (int it : mp)
        {
            if(it == 1)
            c1++;
            else if(it > 1)
            c2++;
        }

        cout << c2 + c1/2 << ed;
    }
    return 0;
}
