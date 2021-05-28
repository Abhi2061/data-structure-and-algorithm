// Problem link : https://www.codechef.com/COOK129C/problems/MARARUN


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int T;
	cin>>T;
	
	while(T--)
	{
	    int A, B, C, D, d, total;
	    cin>>D>>d>>A>>B>>C;
	    
	    total = d*D;
	    
	    if(total >= 42)
	    cout<<C<<"\n";
	    
	    else if(total >= 21)
	    cout<<B<<"\n";
	    
	    else if(total >= 10)
	    cout<<A<<"\n";
	    
	    else
	    cout<<0<<"\n";
	}
	return 0;
}
