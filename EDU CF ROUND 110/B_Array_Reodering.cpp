// Problem link : https://codeforces.com/contest/1535/problem/B


#include <bits/stdc++.h>
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
        int n, cnt = 0;
        cin>>n;

        vector<int> A(n);
        
        for(int &it : A)
        cin>>it;

        for(int i=0; i<n; i++)
        {
            bool f = true;

            if(A[i]%2)
            {
                for(int j=i+1; j<n; j++)
                {
                    if(A[j]%2 == 0)
                    {
                        f = false;
                        int temp = A[i];
                        A[i] = A[j];
                        A[j] = temp;
                        break;
                    }
                }
                
                if(f)
                break;
            }
        }

        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(__gcd(A[i], 2*A[j]) > 1)
                cnt++;
            }
        }

        cout<<cnt<<endl;
    }
    return 0;
}