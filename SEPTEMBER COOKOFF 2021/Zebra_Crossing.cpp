// Problem link : https://www.codechef.com/COOK133B/problems/ZEBRA


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
        int N, K;
        cin>>N>>K;

        string Z;
        cin>>Z;

        int cnt = 1, i = 1;
        char prev = Z[0];

        while(i < N)
        {
            if(Z[i] != prev)
            {
                prev = Z[i];
                cnt++;
            }
            
            i++;
        }

        if(K >= cnt)
        cout<<-1<<ed;
        
        else
        {
            char req;

            if(K%2)
            {
                if(Z[0] == '0')
                req = '1';
                else
                req = '0';
            }
            else
            req = Z[0];

            i = N;

            while(i > 0)
            {
                if(Z[i-1] == req)
                break;
                
                i--;
            }

            cout<<i<<ed;
        }
    }
    
    return 0;
}