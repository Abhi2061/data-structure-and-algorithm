// Problem link : https://www.codechef.com/COOK131B/problems/SHOEFIT


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
        int A, B, C;
	    cin>>A>>B>>C;
	    
	    if(A^B == 1 or A^C == 1)
	    cout<<1<<"\n";
	    else
	    cout<<0<<"\n";
    }

    return 0;
}