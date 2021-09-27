// Problem link : https://www.codechef.com/LTIME100B/problems/ALBOFACE


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
        ll N;
        cin>>N;

        bool f = true;

        while(N)
        {
            if(N%4 == 0)
            break;

            else if(N%2 == 0)
            N /= 2;

            else
            N--;
            
            f = !f;
        }

        if(N == 0)
        f = !f;

        if(f)
        cout<<"Alice"<<ed;

        else
        cout<<"Bob"<<ed;
    }
    
    return 0;
}