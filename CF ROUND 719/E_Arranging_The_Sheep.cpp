// Problem link : https://codeforces.com/contest/1520/problem/E


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

    int T;
    cin>>T;

    while(T--)
    {
        ll sum = 0, n, cnt, mid, mid_pos, i, j, total = 0, l, r;
        cin>>n;

        string S;
        cin>>S;

        for(char it : S)
        {
            if(it == '*')
            total++;
        }

        mid = (total/2) + (total%2);
        l = total/2;
        
        if(total%2)
        r = l;
        else
        r = l+1;

        cnt = 0;

        for(i=0; i<n; i++)
        {
            if(S[i] == '*')
            cnt++;

            if(cnt == mid)
            {
                mid_pos = i;
                break;
            }
        }

        j = mid_pos-1;
        cnt = 0;

        while(j>=0)
        {
            if(S[j] == '*')
            {
                cnt++;
                sum += (mid_pos - cnt - j);
            }

            if(cnt == l)
            break;

            j--;
        }

        j = mid_pos + 1;
        cnt = 0;

        while(j<n)
        {
            if(S[j] == '*')
            {
                cnt++;
                sum += (j - mid_pos - cnt);
            }

            if(cnt == r)
            break;

            j++;
        }

        cout<<sum<<"\n";
    }
    return 0;
}