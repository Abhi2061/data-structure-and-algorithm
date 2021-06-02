// Problem link : https://www.codechef.com/LTIME96C/problems/NUMCOMP1


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n = 10e7 + 2;
vector<bool> prime(n, true);
vector<int> pre_com(n);

void sieve_pr()
{
    prime[0] = prime[1] = false;

    for (int i = 2; i * i < n; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= n; j += i)
                prime[j] = false;
        }
    }
}

void pre()
{
    int cnt = 0;

    for (int i = 0; i <= n; i++)
    {
        if (prime[i])
            cnt++;

        pre_com[i] = cnt;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    sieve_pr();
    pre();

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        if (N == 2)
            cout << 1 << "\n";
        else if (N == 3)
            cout << 2 << "\n";
        else
            cout << pre_com[N] - pre_com[N / 2] + 1 << "\n";
    }
    return 0;
}