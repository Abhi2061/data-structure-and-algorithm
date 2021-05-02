#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int T;
    cin>>T;

    while(T--)
    {
        int N, W, w, prev = 0;
        cin>>N>>W>>w;

        W -= w;

        vector<int> A(N);
        
        for(int &it : A)
        cin>>it;

        sort(A.begin(), A.end());

        for(int it : A)
        {
            if(it == prev)
            {
                W -= (2*it);
                prev = 0;
            }
            else
            prev = it;
        }

        if(W <= 0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }

    return 0;
}