// Problem link : https://www.codechef.com/COOK133B/problems/TYRES


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
        cout<<"YES"<<ed;
        else
        cout<<"NO"<<ed;
    }
    
    return 0;
}