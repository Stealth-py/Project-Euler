for _ in range(int(input())):
    max_ = 0
    k, n = input().split(' ')
    k, n = int(k), int(n)
    N = input()
    for i in range(k - n + 1):
        temp = 1
        for j in range(n):
            temp *= int(N[i + j])
        if max_ < temp:
            max_ = temp
    print(max_)