def solve():
    n, m = int(input()), 0
    for i in range(100, 1000):
        for j in range(100, 1000):
            num = i * j
            rev = 0
            temp = num
            while num:
                rev *= 10
                rev += num%10
                num //= 10
            if temp == rev and temp < n:
                if temp > m:
                    m = temp
            elif temp > n:
                break
    print(m)

for _ in range(int(input())):
    solve()