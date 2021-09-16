// Problem link : https://www.codechef.com/START11B/problems/FILLGRID


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

        if(N%2 == 0)
        {
            for(int i=0; i<N; i++)
            {
                for(int j=0; j<N; j++)
                    cout<<-1<<" ";
                
                cout<<ed;
            }
        }
        else
        {
            for(int i=0; i<N; i++)
            {
                for(int j=0; j<N; j++)
                {
                    if(i == j)
                    cout<<-1<<" ";
                    else
                    cout<<1<<" ";
                }
                cout<<ed;
            }
        }
    }
    
    return 0;
}