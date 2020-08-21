import math

def prime(w):
    for i in range(2, math.ceil(math.sqrt(w)+1)):
        if w%i==0:
            return 0
    return 1

primes = [2]
x = 3
while(len(primes)!=10000):
    if prime(x):
        primes.append(x)
    x += 2
for _ in range(int(input())):
    n = int(input())
    print(primes[n-1])