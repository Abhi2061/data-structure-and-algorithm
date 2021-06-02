// Problem link : https://www.codechef.com/START4C/problems/DEQUEUE


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int T;
    cin >> T;

    while (T--)
    {
        int N, M, min_pop;
        cin >> N >> M;

        set<int> S;
        vector<int> Q(M), last(N + 1, -1);

        for (int &it : Q)
            cin >> it;

        for (int i = M - 1; i >= 0; i--)
            if (last[Q[i]] < 0)
                last[Q[i]] = i;

        for (int i = 1; i <= N; i++)
            S.insert(last[i]);

        min_pop = M - *S.begin();

        for (int i = 1; i < M; i++)
        {
            if(i >= min_pop)
            break;

            if (S.find(last[Q[i - 1]]) != S.end())
                    S.erase(last[Q[i - 1]]);

            if(!S.empty())
            min_pop = min(min_pop, i+M- *S.begin());
            else
            min_pop = min(min_pop, i);
        }

        cout<<min_pop<<"\n";
    }
    return 0;
}