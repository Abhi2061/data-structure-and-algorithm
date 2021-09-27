// Problem link : https://www.codechef.com/START12C/problems/MAXPOINT


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
        int A, B, C;
        cin >> A >> B >> C;

        int X, Y, Z;
        cin >> X >> Y >> Z;

        int total = 0, time;

        for(int i=0; i<=20; i++)
        {
            int temp = 0, time = 240;

            if(i*A > time)
            break;

            time -= i*A;
            temp += i*X;

            for(int j=0; j<=20; j++)
            {
                if(j*B > time)
                break;
                
                time -= j*B;
                temp += j*Y;
                
                for(int k=0; k<=20; k++)
                {
                    if(k*C > time)
                    break;

                    time -= k*C;
                    temp += k*Z;

                    total = max(total, temp);

                    time += k*C;
                    temp -= k*Z;
                }

                time += j*B;
                temp -= j*Y;
            }

            time += i*A;
            temp -= i*X;
        }

        cout << total << ed;
    }

    return 0;
}