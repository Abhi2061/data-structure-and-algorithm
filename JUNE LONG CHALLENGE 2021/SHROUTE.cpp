// Problem link : https://www.codechef.com/JUNE21B/problems/SHROUTE


#include <bits/stdc++.h>
#define ed "\n"
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;

    while(T--)
    {
        int n, m, ans, dir;
        cin>>n>>m;

        vector<int> left, right;

        for(int i=1; i<=n; i++)
        {
            cin>>dir;

            if(dir == 1)
            right.push_back(i);
            else if(dir == 2)
            left.push_back(i);
        }

        while(m--)
        {
            int dest, dist1 = INT_MAX, dist2 = INT_MAX;
            cin>>dest;

            auto it1 = lower_bound(left.begin(), left.end(), dest);
            auto it2 = lower_bound(right.begin(), right.end(), dest);

            if(it1 != left.end())
            dist1 = (*it1) - dest;

            if(it2 != right.end() and (*it2) == dest)
            dist2 = 0;
            else if(it2 != right.begin())
            {
                it2--;
                dist2 = dest - (*it2);
            }

            ans = min(dist1, dist2);

            if(ans == INT_MAX)
            ans = -1;

            if(dest == 1)
            ans = 0;

            cout<<ans<<" ";
        }    
        cout<<ed;   
    }
    return 0;
}