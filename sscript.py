for _ in range(int(input())):
    n, k = map(int, input().split())
    s = input()
    x = 0
    for i in range(n):
        if(s[i] != '*'):
            x = 0
        else:
            x = x+1
            if(x == k):
                break
    if(x == k):
        print("YES")
    else:
        print("NO")
