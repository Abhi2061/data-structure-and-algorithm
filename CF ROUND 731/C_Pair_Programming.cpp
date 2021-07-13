// Problem link : https://codeforces.com/contest/1547/problem/C


#include <bits/stdc++.h>
#define ed "\n"
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
        int k, n, m;
        cin >> k >> n >> m;

        vector<int> A(n), B(m), ans;

        for (int &it : A)
            cin >> it;

        for (int &it : B)
            cin >> it;

        int i = 0, j = 0;
        bool f = true;

        while (i < n and j < m)
        {
            if (A[i] <= B[j])
            {
                if (A[i] == 0)
                    k++;

                if (A[i] > k)
                    f = false;

                ans.push_back(A[i]);
                i++;
            }
            else
            {
                if (B[j] == 0)
                    k++;

                if (B[j] > k)
                    f = false;

                ans.push_back(B[j]);
                j++;
            }
        }

        while (i < n)
        {
            if(A[i] == 0)
            k++;

            if(A[i] > k)
            f = false;

            ans.push_back(A[i++]);
        }

        while (j < m)
        {
            if(B[j] == 0)
            k++;

            if(B[j] > k)
            f = false;

            ans.push_back(B[j++]);
        }

        if(!f)
        {
            cout<<-1<<ed;
            continue;
        }

        for(int &it : ans)
        cout<<it<<" ";

        cout << ed;
    }
    return 0;
}