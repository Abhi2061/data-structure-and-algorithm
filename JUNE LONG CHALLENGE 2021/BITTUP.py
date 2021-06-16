# Problem link : https://www.codechef.com/JUNE21B/problems/BITTUP


t = int(input())

mod = pow(10,9) + 7

for i in range(t):
    n,m=map(int,input().split())
    ans = pow(pow(2,n,mod)-1, m, mod)
    print(ans)