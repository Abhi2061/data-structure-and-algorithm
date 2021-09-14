# Problem link : https://www.codechef.com/SEPT21B/problems/TRAVELPS/


try:
    T = int(input())
    
    while(T):
        N, A, B = [int(x) for x in input().split()]
        
        S = input()
        total = 0
        
        for i in S:
            if(i=='0'):
                total += A
            else:
                total += B
            
        print(total)
        T -= 1

except:
    pass