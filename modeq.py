for _ in range(int(input())):
    n, m = map(int, input().split())
    c = 0
    me = [1]*(n+1)
    for i in range(2, n+1):
        a = m % i
        c += me[a]
        for j in range(a, n+1, i):
            me[j] += 1
    print(c)
