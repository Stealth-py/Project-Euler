def solve(n):
    if n%2 == 0:
        return solve(n//2)
    else:
        if n==1:
            return 2
        else:
            i = 3
            while i*i <= n:
                if not n%i:
                    return solve(n/i)
                i += 2
            return n

for _ in range(int(input())):
    n = int(input())
    print(int(solve(n)))