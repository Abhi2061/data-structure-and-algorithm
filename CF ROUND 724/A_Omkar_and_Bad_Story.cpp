// Problem link : https://codeforces.com/contest/1536/problem/A


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void ins(set<int> &A, int v)
{
    set<int> temp;

    for(auto it : A)
    temp.insert(abs(it-v));

    A.insert(v);

    for(auto it : temp)
    {
        if(A.find(it) == A.end())
        ins(A, it);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;

    while(T--)
    {
        bool f = true;
        int n, temp;
        cin>>n;

        set<int> A;

        for(int i=0; i<n; i++)
        {
            cin>>temp;
            A.insert(temp);
            
            if(temp<0)
            f = false;
        }   

        if(f)
        {
            set<int> t;

            for(auto it1 : A)
            {
                for(auto it2 : A)
                {
                    if(it1 != it2)
                    t.insert(abs(it1-it2));
                }
            }

            for(auto it : t)
            {
                if(A.find(it) == A.end())
                ins(A, it);
            }
            
            cout<<"YES\n"<<A.size()<<"\n";
            
            for(auto it : A)
            cout<<it<<" ";
            
            cout<<"\n";
        } 
        
        else
        cout<<"NO\n";
    }
    return 0;
}