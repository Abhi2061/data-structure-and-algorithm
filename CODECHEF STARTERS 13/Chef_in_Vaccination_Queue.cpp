// Problem link : https://www.codechef.com/START13B/problems/VACCINQ


#include <bits/stdc++.h>
#define ed "\n"
#define all(x) x.begin(), x.end()
#define input(x)       \
    for (auto &it : x) \
    cin >> it
#define output(x, y)  \
    for (auto it : x) \
    cout << it << y

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
        int N, P, X, Y;
        cin>>N>>P>>X>>Y;

        vector<int> A(N);

        input(A);

        int ans = 0;

        for(int i=0; i<P-1; i++)
        {
            if(A[i] == 0)
            ans += X;
            else
            ans += Y;
        }

        ans += Y;

        cout<<ans<<ed;
    }
    
    return 0;
}