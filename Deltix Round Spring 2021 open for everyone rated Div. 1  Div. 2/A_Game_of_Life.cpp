// Problem link : https://codeforces.com/contest/1523/problem/A


#include <bits/stdc++.h>
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
        int n, m;
        cin >> n >> m;

        string S;
        cin >> S;

        while (m--)
        {
            bool f = false;

            for (int i = 0; i < n; i++)
            {
                if (S[i] == '0')
                {
                    if (i == 0)
                    {
                        if (S[1] == '1')
                            S[i] = '2';
                    }
                    else if (i == n - 1)
                    {
                        if (S[i - 1] == '1')
                            S[i] = '2';
                    }
                    else
                    {
                        if (S[i - 1] == '1' ^ S[i + 1] == '1')
                            S[i] = '2';
                    }
                }
            }

            for (char &it : S)
                if (it == '2')
                {
                    f = true;
                    it = '1';
                }

            if (!f)
                break;
        }

        for (char it : S)
            cout << it;

        cout << "\n";
    }
    return 0;
}