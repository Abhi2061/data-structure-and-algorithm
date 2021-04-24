//Problem link : https://www.codechef.com/APRIL21C/problems/SOCKS1

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int A, B, C;
	cin>>A>>B>>C;
	
	if(A == B || B == C || A == C)
	cout<<"YES";
	else
	cout<<"NO";
	
	return 0;
}

