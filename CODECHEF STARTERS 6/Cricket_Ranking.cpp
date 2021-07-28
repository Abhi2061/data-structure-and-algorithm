// Problem link : https://www.codechef.com/START6B/problems/CRICRANK


#include <bits/stdc++.h>
#define ed "\n"
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;

    while(T--)
    {
        int p1 = 0, p2 = 0, R1, R2, W1, W2, C1, C2;

        cin>>R1>>W1>>C1;
        cin>>R2>>W2>>C2;

        if(R1 > R2)
        p1++;
        else
        p2++;

        if(W1 > W2)
        p1++;
        else
        p2++;

        if(C1 > C2)
        p1++;
        else
        p2++;

        if(p1 > p2)
        cout<<"A"<<ed;
        else
        cout<<"B"<<ed;
    }
    return 0;
}