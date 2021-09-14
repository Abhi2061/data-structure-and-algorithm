# Problem link : https://www.codechef.com/SEPT21B/problems/AIRLINE/


try:
    T = int(input())
    
    while (T):
        A, B, C, D, E = [int(x) for x in input().split()]

        F = 0
        
        if(A <= E and B+C <= D):
            F = 1
        if(B <= E and A+C <= D):
            F = 1
        if(C <= E and A+B <= D):
            F = 1
                
        if(F == 1):
            print("YES")
            
        else:
            print("NO")
                
except:
    pass
    

