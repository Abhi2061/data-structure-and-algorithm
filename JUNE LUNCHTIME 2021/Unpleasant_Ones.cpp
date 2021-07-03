// Problem link : https://www.codechef.com/LTIME97C/problems/UNONE


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
        int N, A;
        cin >> N;

        vector<int> even, odd;

        for (int i = 0; i < N; i++)
        {
            cin >> A;

            if (A % 2)
                odd.push_back(A);
            else
                even.push_back(A);
        }

        for(int it : even)
        cout<<it<<" ";

        for(int it : odd)
        cout<<it<<" ";

        cout << ed;
    }
    return 0;
}