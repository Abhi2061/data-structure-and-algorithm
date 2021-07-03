// Problem link : https://www.codechef.com/LTIME97C/problems/HTMLTAGS


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
        string S;
        cin >> S;

        int n = S.length();
        bool ans = true;

        if (S[0] == '<' and S[1] == '/' and S[n - 1] == '>' and n > 3)
        {
            for (int i = 2; i < n - 1; i++)
            {
                if(!isalnum(S[i]))
                ans = false;
                if(isupper(S[i]))
                ans = false;
            }
        }
        else
            ans = false;

        if (ans)
            cout << "Success" << ed;
        else
            cout << "Error" << ed;
    }
    return 0;
}