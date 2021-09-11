// Problem link : https://www.codechef.com/LTIME98B/problems/ARRT


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
        int N;
        cin>>N;

        vector<int> A(N), B(N);

        input(A);
        input(B);

        int i = 0, ans;
        vector<int> pos;

        for(int i=0; i<N; i++)
        pos.push_back(i);

        while(pos.size() != 1)
        {
            int Min = INT_MAX;
            vector<int> P;
            
            for(auto it : pos)
            {
                int temp  = (A[i]+B[(it+i)%N])%N;

                if(temp < Min)
                {
                    Min = temp;
                    P.clear();
                }
                
                if(temp == Min)
                    P.push_back(it);
            }

            pos = P;
            i++;
        }

        int r = pos[0];

        for(int i=0; i<N; i++)
            cout<<(A[i]+B[(i+r)%N])%N<<" ";

        cout<<ed;
    }
    return 0;
}