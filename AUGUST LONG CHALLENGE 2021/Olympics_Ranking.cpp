// Problem link : https://www.codechef.com/AUG21B/problems/OLYRANK

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
        vector<int> med1(3), med2(3);

        input(med1);
        input(med2);

        int cnt1 = 0, cnt2 = 0;

        for (int i = 0; i < 3; i++)
        {
            cnt1 += med1[i];
            cnt2 += med2[i];
        }

        if (med1 > med2)
            cout << 1 << ed;
        else
            cout << 2 << ed;
    }
    return 0;
}