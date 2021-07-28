// Problem link : https://codeforces.com/contest/1553/problem/C


#include <bits/stdc++.h>
#define ed "\n"
using namespace std;
using ll = long long;

int Min;

void calculate(string s)
{
    int team1 = 0, team2 = 0;
    int i = 0;

    while(i < 10)
    {
        if(s[i] == '1')
        {
            if(i%2 == 0)
            team1++;
            else
            team2++;
        }

        if(team1 > team2)
        {
            if((10-i)/2+team2 < team1)
            {
                Min = min(Min, i+1);
                return;
            }
        }
        else if(team1 < team2)
        {
            if((9-i)/2+team1 < team2)
            {
                Min = min(Min, i+1);
                return;
            }
        }

        i++;
    }
}
void generate(string s, int i)
{
    if(i == 10)
    calculate(s);
    else
    {
        if(s[i] == '?')
        {
            s[i] = '1';
            generate(s, i+1);
            
            s[i] = '0';
            generate(s, i+1);

            s[i] = '?';
        }
        else 
        generate(s, i+1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;

    while(T--)
    {
        string S;
        cin>>S;

        Min = 10;

        generate(S, 0);

        cout<<Min<<ed;
    }
    return 0;
}