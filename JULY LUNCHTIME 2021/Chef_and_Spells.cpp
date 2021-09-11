// Problem link : https://www.codechef.com/LTIME98B/problems/CHFSPL


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
        vector<int> A(3);
        input(A);

        sort(all(A));

        cout << A[1] + A[2] << ed;
    }
    return 0;
}