// Problem link : https://www.codechef.com/START11B/problems/FACEDIR


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
        int X;
        cin>>X;

        X %= 4;

        if(X == 0)
        cout<<"North"<<ed;
        else if(X == 1)
        cout<<"East"<<ed;
        else if(X == 2)
        cout<<"South"<<ed;
        else
        cout<<"West"<<ed;
    }
    
    return 0;
}