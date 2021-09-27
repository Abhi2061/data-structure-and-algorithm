// Problem link : https://www.codechef.com/LTIME100B/problems/UNQEQ


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

        if(N%4)
        cout<<"NO"<<ed;
        
        else
        {
            cout<<"YES"<<ed;

            for(int i=1; i<=N/4; i++)
            cout<<i<<" ";

            for(int i=(3*(N/4))+1; i<=N; i++)
            cout<<i<<" ";

            cout<<ed;

            for(int i=(N/4)+1; i<=3*(N/4); i++)
            cout<<i<<" ";

            cout<<ed;
        }
    }
    
    return 0;
}