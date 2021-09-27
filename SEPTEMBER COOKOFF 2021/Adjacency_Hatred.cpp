// Problem link : https://www.codechef.com/COOK133B/problems/ADJHATE


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
        int N;
        cin >> N;

        vector<int> A(N);

        input(A);

        vector<int> odd, even;

        for (int it : A)
        {
            if (it % 2 == 0)
                even.push_back(it);
            else
                odd.push_back(it);
        }

        if (even.size() == N or even.size() == 0)
            cout << -1 << ed;

        else
        {
            int i = 0, j = 0;

            while (i < odd.size())
                cout << odd[i++] << " ";

            while (j < even.size())
                cout << even[j++] << " ";

            cout << ed;
        }
    }

    return 0;
}