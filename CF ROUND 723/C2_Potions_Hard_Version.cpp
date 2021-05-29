// Problem link : https://codeforces.com/contest/1526/problem/C2


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, cnt = 0, p, temp;
    cin>>n;

    ll H = 0;
    priority_queue<int, vector<int> , greater<int>> pq;

    for(ll i=0; i<n; i++)
    {
        cin>>p;
        
        H += p;
        cnt++;
        pq.push(p);

        if(H < 0)
        {
            H -= pq.top();
            pq.pop();
            cnt--;
        }
    }

    cout<<cnt<<"\n";

    return 0;
}