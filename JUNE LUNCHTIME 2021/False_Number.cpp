// Problem link : https://www.codechef.com/LTIME97C/problems/FALSNUM


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
        string A;
        cin >> A;

        if (A[0] == '1')
            A.insert(A.begin() + 1, '0');

        else
            A.insert(A.begin(), '1');

        for (char it : A)
            cout << it;

        cout << ed;
    }
    return 0;
}