def cal(x,a):
    i=0
    x=1
    while i<=a:
        x*=x**i
        i+=2
    if i!=a:
        x*=x
    return x
    
    
    x,a=map(int,input().split())
    q=cal(x,a)
    print(q)
    
