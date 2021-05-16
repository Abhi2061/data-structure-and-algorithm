// Problem link : https://codeforces.com/contest/1515/problem/C


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

    int T;
    cin>>T;

    while(T--)
    {
        int n, m, x;
        cin>>n>>m>>x;

        vector<int> A(n);

        for(int &it : A)
        cin>>it;

        set<pair<int,int>> S;

        cout<<"YES\n";

        for(int i=0; i<m; i++)
        {
            S.insert({A[i],i+1});
            cout<<i+1<<" ";
        }

        for(int i=m; i<n; i++)
        {
            pair<int,int> temp = *S.begin();
            S.erase(temp);
            temp.first += A[i];
            S.insert(temp);
            cout<<temp.second<<" ";
        }
        
        cout<<"\n";
    }
    return 0;
}