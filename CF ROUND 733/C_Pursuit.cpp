// Problem link : https://codeforces.com/contest/1530/problem/C


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
        int n, cnt;
        cin>>n;

        cnt = n - int(n/4);

        vector<int> A(n), B(n);

        for(int &it : A)
        cin>>it;

        for(int &it : B)
        cin>>it;

        sort(A.begin(), A.end(), greater<int>());
        sort(B.begin(), B.end(), greater<int>());

        int sum1 = 0, sum2 = 0;

        for(int i=0; i<cnt; i++)
        {
            sum1 += A[i];
            sum2 += B[i];
        }

        int init = n, j = cnt-1;

        while(sum1 < sum2)
        {
            n++;

            cnt = n - int(n/4);

            if(n%4)
            {
                sum1 += 100;

                if(cnt <= init)
                sum2 += B[cnt-1];
            }
            else
            {
                sum1 += 100;

                if(j>=0)
                sum1 -= A[j--];
            }
        }

        cout<<n-init<<ed;
    }
    return 0;
}