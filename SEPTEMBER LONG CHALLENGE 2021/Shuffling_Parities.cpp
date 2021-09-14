// Problem link : https://www.codechef.com/SEPT21B/problems/SHUFFLIN/


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
	
	int T;
	cin>>T;
	
	while(T--)
	{
	    int n;
	    cin>>n;
	    
	    int oddC = 0, evenC = 0, A;
	    
	    for(int i=0; i<n; i++)
	    {
	        cin>>A;
	        
	        if(A%2)
	        oddC++;
	        else
	        evenC++;
	    }
	    
	    int ans = min(oddC, n/2) + min(evenC, (n+1)/2);
	    
	    cout<<ans<<"\n";
	}
	return 0;
}
