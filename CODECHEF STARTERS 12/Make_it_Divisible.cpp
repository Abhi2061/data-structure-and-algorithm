// Problem link : https://www.codechef.com/START12C/problems/MAKEDIV3


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
        int n;
        cin>>n;

        if(n%3 == 0)
        {
            for(int i=0; i<n-1; i++)
            cout<<3;

            cout<<9<<ed;
        }

        else
        {
            for(int i=0; i<n; i++)
            cout<<3;

            cout<<ed;
        }
    }
    
    return 0;
}