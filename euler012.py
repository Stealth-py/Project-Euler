import math

def div(n):
    d=0
    for i in range(1, int(n**(0.5))+1):
        if n%i==0:
            if i==n//i:
                d+=1
            else:
                d+=2
    return d

for _ in range(int(input())):
    n=int(input())
    i = 1
    t = 1
    f1, f2 = 1, 1
    while 1:
        if i%2==0:
            f1 = div(i//2)
            f2 = div(i+1)
        else:
            f1 = div(i)
            f2 = div((i+1)//2)
        if f1*f2>n:
            print(i*(i+1)//2)
            break
        i+=1
