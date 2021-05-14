// Problem link : https://codeforces.com/contest/1520/problem/B

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
        vector<int> dig;
        int n, temp, cnt = 0, prev, dir = 0;
        cin>>n;

        temp = n;

        while(temp)
        {
            dig.push_back(temp%10);
            temp /= 10;
        }
        
        cnt += (dig.size()-1)*9;

        reverse(dig.begin(), dig.end());

        prev = dig[0];

        for(int i=1; i<dig.size(); i++)
        {
            if(dig[i] < prev)
            {
                dir = -1;
                break;
            }
            else if(dig[i] > prev)
            break;
        }
        
        cnt += (dig[0]+dir);

        cout<<cnt<<endl;
    }
    return 0;
}