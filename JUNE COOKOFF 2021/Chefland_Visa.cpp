// Problem link : https://www.codechef.com/COOK130C/problems/VISA


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
        int x1, x2, y1, y2, z1, z2;
        cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;

        if (x1 <= x2 and y1 <= y2 and z1 >= z2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}