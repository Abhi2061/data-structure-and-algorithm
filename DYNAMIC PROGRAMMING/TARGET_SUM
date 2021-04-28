// Problem link : https://leetcode.com/problems/target-sum/

#include <bits/stdc++.h>
using namespace std;

int TargetSum(vector<int>& nums, int target) {
	int sum = 0, n, cnt = 0;

	for(int it : nums)
	{
	    if(it == 0)
		cnt++;
	    else
		sum += it;
	}

	n = nums.size();

	if((abs(target)+sum)%2)
	    return 0;

	sum = (abs(target)+sum)/2;

	int dp[n+1][sum+1];

	for(int i=0; i<=n; i++)
	{
	    for(int j=0; j<=sum; j++)
	    {
		if(j == 0)
		    dp[i][j] = 1;
		
		else if(i == 0)
		    dp[i][j] = 0;
		
		else if(nums[i-1] <= j && nums[i-1] != 0)
		    dp[i][j] = dp[i-1][j-nums[i-1]] + dp[i-1][j];
		
		else
		    dp[i][j] = dp[i-1][j];
	    }
	}

	return pow(2,cnt)*dp[n][sum];
}

int main()
{
	int n, target;
	cin>>n;
	
	vector<int> A(n);
	
	for(int &it : A)
	cin>>it;
	
	cin>>target;
	
	cout<<TargetSum(A, target);
	
	return 0;
}
