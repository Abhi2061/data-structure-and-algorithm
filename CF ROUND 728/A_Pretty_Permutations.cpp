// Problem link : https://codeforces.com/contest/1541/problem/A


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
        int n;
        cin>>n;

        vector<int> A;

        if(n%2)
        {
            A.push_back(3);
            A.push_back(1);
            A.push_back(2);

            for(int i=2; i<=n/2; i++)
            {
                A.push_back(2*i + 1);
                A.push_back(2*i);
            }
        }
        else
        {
            for(int i=1; i<=n/2; i++)
            {
                A.push_back(2*i);
                A.push_back(2*i - 1);
            }
        }

        for(int it : A)
        cout<<it<<" ";

        cout<<ed;
    }
    return 0;
}