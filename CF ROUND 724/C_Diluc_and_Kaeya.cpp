// Problem link : https://codeforces.com/contest/1536/problem/C


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

pair<int, int> g_ratio(int a, int b)
{
    int c = __gcd(a,b);
    a /= c;
    b /= c;

    return {a,b};
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        int n, d = 0, k = 0;
        string S;

        cin >> n >> S;

        map<pair<int,int>, int> mp;

        for(char it : S)
        {
            if(it == 'D')
            d++;
            else
            k++;

            cout<<++mp[g_ratio(d,k)]<<" ";
        }

        cout<<"\n";
    }
    return 0;
}