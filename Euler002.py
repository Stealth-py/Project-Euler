for _ in range(int(input())):
    i, j, s = 1, 1, 0
    n = int(input())
    while i + j <= n:
        i, j = j, i + j
        if j%2 == 0:
            s += j
    print(s)