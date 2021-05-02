#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int T;
    cin>>T;

    while(T--)
    {
        ll N, A, B, T_A = 0, T_S = 0;
        cin>>N>>A>>B;

        for(int i=0; i<N; i++)
        {
            string S;
            cin>>S;

            if(S[0] == 'E' || S[0] == 'Q' || S[0] == 'U' || S[0] == 'I' || S[0] == 'N' || S[0] == 'O' || S[0] == 'X')
            T_S += A;
            else
            T_A += B;
        }

        if(T_A > T_S)
        cout<<"ANURADHA\n";
        else if(T_A < T_S)
        cout<<"SARTHAK\n";
        else
        cout<<"DRAW\n";
    }
    return 0;
}