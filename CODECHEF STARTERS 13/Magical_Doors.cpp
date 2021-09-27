// Problem link : https://www.codechef.com/START13B/problems/MAGDOORS


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
        string S;
        cin>>S;

        int cnt = 0;

        bool f = true;

        for(int i=0; i<S.length(); i++)
        {
            if(f and S[i] == '0')
            {
                f = !f;
                cnt++;
            }

            else if(!f and S[i] == '1')
            {
                f = !f;
                cnt++;
            }
        }

        cout<<cnt<<ed;
    }
    
    return 0;
}