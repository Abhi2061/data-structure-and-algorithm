// Problem link : https://www.codechef.com/SEPT21B/problems/PALINT


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
        int N, X;
	    cin>>N>>X;
	    
	    vector<int> A(N);
	    map<int,int> mp;
	    int MaxCnt = INT_MIN, ops = 0;

	    for(int &it : A)
	    {
	        cin>>it;
	        
	        mp[it]++;
			MaxCnt = max(MaxCnt, mp[it]);
	    }
	    
		for(auto it : mp)
		{
			int key = it.first, val = it.second;
			int cnt = val, req = mp[key^X];

			if(X != 0)
			cnt += mp[key^X];

			if(cnt > MaxCnt)
			{
				MaxCnt = cnt;
				ops = req;
			}
			else if(cnt == MaxCnt)
			{
				ops = min(ops, req);
			}
		}
	    
		cout<<MaxCnt<<" "<<ops<<ed;
    }
    
    return 0;
}