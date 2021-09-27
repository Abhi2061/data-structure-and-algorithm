// Problem link : https://www.codechef.com/START13B/problems/DIWALI1


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
        int P, a, b, c, x, y;
        cin>>P>>a>>b>>c>>x>>y;

        int A, C;

        A = x*a + b;
        C = y*a + c;

        int Max = 0;

        for(int i=0; A*i <= P; i++)
        {
            int cnt = (P - i*A)/C + i;

            Max = max(Max, cnt);
        }

        cout<<Max<<ed;
    }
    
    return 0;
}