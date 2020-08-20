def gcd(x, y):
    if y == 0:
        return x
    return gcd(y, x%y)

def lcm(x, y):
    return (x * y) / gcd(x, y)

for _ in range(int(input())):
    n, temp = int(input()), 1
    for i in range(1, n+1):
        temp = lcm(i, temp)
    print(int(temp))