// Problem link : https://codeforces.com/contest/1546/problem/A


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
        int n, diff = 0;
        cin >> n;

        vector<int> A(n), B(n);

        for (int &it : A)
            cin >> it;

        for (int &it : B)
            cin >> it;

        for (int i = 0; i < n; i++)
            diff += (A[i] - B[i]);

        if (diff)
            cout << -1 << ed;
        else
        {
            for (int i = 0; i < n; i++)
                diff += abs(A[i] - B[i]);

            cout << diff / 2 << ed;
            
            int i = 0, j = 0;

            while (i < n and A[i] <= B[i])
                i++;

            while (j < n and A[j] >= B[j])
                j++;

            while (i < n and j < n)
            {
                cout << i + 1 << " " << j + 1 << ed;
                A[i]--;
                A[j]++;

                while (i < n and A[i] <= B[i])
                    i++;

                while (j < n and A[j] >= B[j])
                    j++;
            }
        }
    }
    return 0;
}