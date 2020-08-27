arr = [[int(i) for i in input().split()] for _ in range(20)]
max_ = 0
for i in range(20):
    for j in range(20):
        if i < 17:
            if arr[i][j] * arr[i + 1][j] * arr[i + 2][j] * arr[i + 3][j] > max_:
                max_ = arr[i][j] * arr[i + 1][j] * \
                    arr[i + 2][j] * arr[i + 3][j]
            if j > 2:
                if arr[i][j] * arr[i + 1][j - 1] * arr[i + 2][j - 2] * arr[i + 3][j - 3] > max_:
                    max_ = arr[i][j] * arr[i + 1][j - 1] * \
                        arr[i + 2][j - 2] * arr[i + 3][j - 3]
            if j < 17:
                if arr[i][j] * arr[i + 1][j + 1] * arr[i + 2][j + 2] * arr[i + 3][j + 3] > max_:
                    max_ = arr[i][j] * arr[i + 1][j + 1] * \
                        arr[i + 2][j + 2] * arr[i + 3][j + 3]
        if j < 17:
            if arr[i][j] * arr[i][j + 1] * arr[i][j + 2] * arr[i][j + 3] > max_:
                max_ = arr[i][j] * arr[i][j + 1] * \
                    arr[i][j + 2] * arr[i][j + 3]
print(max_)