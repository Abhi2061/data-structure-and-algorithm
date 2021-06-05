# Problem link : https://www.codechef.com/MAY21C/problems/XOREQUAL


t = int(input())

m = pow(10,9) + 7


for i in range(t):
    n = int(input())
    n = n-1
    ans = pow(2,n,m)
    print(ans)
    