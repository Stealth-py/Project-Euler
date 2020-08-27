primearr = [1] * 1000001
primearr[1] = 0
for i in range(2, 1001, 1):
    if primearr[i]:
        for j in range(i * i, 1000001, i):
            primearr[j] = 0
sumarr = [0] * 1000001
for i in range(2, 1000001, 1):
    sumarr[i] += sumarr[i - 1]
    if primearr[i]:
        sumarr[i] += i
for _ in range(int(input())):
    print(sumarr[int(input())])