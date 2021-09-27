// Problem link : https://www.codechef.com/START12C/problems/KBALANCE


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

        string S;
        cin>>S;

        int cnt = 0;

        vector<bool> A(N, false);

        for(int i=0; i<N; i++)
        {
            if(S[i] == '1')
            {
                if((i+K >= N or S[i+K] == '0') and (i-K < 0 or S[i-K] == '0'))
                A[i] = true;
            }
        }

        for(int i=0; i<N; i++)
        {
            if(A[i])
            {
                if((i+(2*K) < N and A[i+(2*K)]))
                A[i+(2*K)] = false;

                cnt++;
                A[i] = false;
            }
        }

        for(auto it : A)
        {
            if(it)
            cnt++;
        }

        cout<<cnt<<ed;
    }
    
    return 0;
}