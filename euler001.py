for _ in range(int(input())):
    n, s = int(input()) - 1, 0
    s += 3*(n//3)*(n//3+1)
    s += 5*(n//5)*(n//5+1)
    s -= 15*(n//15)*(n//15+1)
    print(int(s//2)) 