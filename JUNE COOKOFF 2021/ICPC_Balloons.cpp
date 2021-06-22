// Problem link : https://www.codechef.com/COOK130C/problems/BALLOON


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
        int n, A, cnt = 0, ans = 20;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> A;

            if (A <= 7)
                cnt++;

            if (cnt == 7)
            ans = min(i+1, ans);
        }

        cout<<ans<<endl;
    }
    return 0;
}