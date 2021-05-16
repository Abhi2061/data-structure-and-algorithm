// Problem link : https://codeforces.com/contest/1515/problem/A


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
    cin >> T;

    while (T--)
    {
        int n, x, sum = 0;
        cin >> n >> x;

        vector<int> A(n);

        for(int &it : A)
        {
            cin>>it;
            sum += it;
        }

        if(sum == x)
        cout<<"NO\n";

        else
        {
            cout<<"YES\n";

            sort(A.begin(), A.end());
            sum = 0;

            for(int i=0; i<n; i++)
            {
                sum += A[i];

                if(sum == x)
                {
                    int temp = A[i];
                    A[i] = A[i+1];
                    A[i+1] = temp;
                    break;
                }
            }

            for(int it : A)
            cout<<it<<" ";

            cout<<"\n";
        }

    }
    return 0;
}