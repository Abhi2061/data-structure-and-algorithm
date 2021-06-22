// Problem link : https://www.codechef.com/COOK130C/problems/BNSONSTR


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
        int n, cnt = 0, ans = INT_MAX;
        cin >> n;

        string S;
        cin >> S;

        for (char it : S)
            if (it == '1')
                cnt++;

        vector<int> fact;

        for (int i = 1; i <= n; i++)
            if (n % i == 0)
                fact.push_back(i);

        for (auto it : fact)
        {
            vector<int> one(it, 0), zero(it, 0);

            for (int i = 0; i < n; i++)
            {
                if (S[i] == '1')
                    one[i % it]++;
                else
                    zero[i % it]++;
            }

            for (int i = 0; i < it; i++)
                ans = min(ans, zero[i] + cnt - one[i]);
        }

        cout << ans << ed;
    }
    return 0;
}