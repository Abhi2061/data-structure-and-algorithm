// Problem link : https://codeforces.com/contest/1498/problem/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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
        int n, W, cnt = 0;
        bool f;
        cin>>n>>W;

        vector<int> A(n), H;

        for(int &it : A)
        cin>>it;

        sort(A.begin(), A.end(), greater<int>());
        
        for(int it : A)
        {
            f = false;
            if(H.empty())
            H.push_back(0);

            for(int i=0; i<H.size(); i++)
            {
                if(H[i]+it <= W)
                {
                    

                    if(H[i]+it == W)
                    {
                        cnt++;
                        H.erase(H.begin()+i);
                    }
                    else
                    H[i] += it;
                    
                    f = true;
                    break;
                }
            }

            if(!f)
            H.push_back(it);
        }

        cout<<H.size()+cnt<<"\n";
    }
    return 0;
}