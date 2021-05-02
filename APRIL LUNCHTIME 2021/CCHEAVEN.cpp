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
        int N, cnt_0 = 0, cnt_1 = 0;
        cin>>N;

        string S, ans = "NO";
        cin>>S;

        for(char it : S)
        {
            if(it == '0')
            cnt_0++;
            else
            cnt_1++;

            if(cnt_1 >= cnt_0)
            {
                ans = "YES";
                break;
            }
        }

        cout<<ans<<"\n";
    }
    return 0;
}