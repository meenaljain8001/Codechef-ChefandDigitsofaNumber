t=int(input())
for i in range(t):
    c=0
    d=0
    n=input()
    for i in n:
        if(i=='1'):
            c=c+1
        elif(i=='0'):
            d=d+1
    if(c==1 or d==1):
        print("Yes")
    else:
        print("No")
