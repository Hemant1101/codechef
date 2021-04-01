for t in range(int(input())):
    n, k, e, m = map(int, input().split())
    x = [0]*(n-1)
    xn = 0
    for i in range(n-1):
        l = 0
        z = list(map(int, input().split()))
        for y in range(e):
            l = l+z[y]
        x[i] = l
    z = list(map(int, input().split()))
    for i in range(e-1):
        xn = xn+z[i]
    x.sort(reverse=True)
    if((x[k-1]-xn) < m):
        if(xn > x[k-1]):
            print(0)
        else:
            print((x[k-1]-xn)+1)
    else:
        print("Impossible")
