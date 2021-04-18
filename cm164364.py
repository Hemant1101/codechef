for t in range(int(input())):
    n, x = map(int, input().split())
    l = list(map(int, input().split()))
    s = set(l)
    if len(l)-len(s) >= x:
        print(len(s))
    else:
        bc = 0
        l.sort()
        for i in range(len(l)-1):
            if l[i] == l[i+1]:
                bc = bc+1
        maxc = len(s)
        while x > bc:
            maxc -= 1
            bc += 1
        print(maxc)
