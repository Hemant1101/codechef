for _ in range(int(input())):
    n, r = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    ten = b[0]
    temp = 0
    for i in range(1, n):
        ten = ten-(a[i]-a[i-1])*r
        if ten < 0:
            ten = 0
        ten += b[i]
        if ten > temp:
            temp = ten
    temp = max(temp, ten)
    print(temp)
