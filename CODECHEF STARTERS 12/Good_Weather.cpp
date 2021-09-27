// Problem link : https://www.codechef.com/START12C/problems/GOODWEAT


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
        vector<int> A(7);

        input(A);

        int sum = 0;

        for(int it : A)
        sum += it;

        if(sum > 3)
        cout<<"YES"<<ed;
        else
        cout<<"NO"<<ed;
    }
    
    return 0;
}