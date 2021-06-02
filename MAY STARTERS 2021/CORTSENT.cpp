// Problem link : https://www.codechef.com/START4C/problems/CORTSENT


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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
        bool f = true;
        string word;
        int n;
        cin>>n;

        while(n--)
        {
            cin>>word;

            if(f and islower(word[0]))
            {
                for(char it : word)
                {
                    if(!islower(it) or it < 'a' or it > 'm')
                    {
                        f = false;
                        break;
                    }
                }
            }
            else if(f)
            {
                for(char it : word)
                {
                    if(!isupper(it) or it < 'N' or it > 'Z')
                    {
                        f = false;
                        break;
                    }
                }
            }
        }

        if(f)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}