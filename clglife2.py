for _ in range(int(input())):
    s = int(input())
    q = list(map(int, input().split()))
    sum = 0
    for i in range(s):
        e = list(map(int, input().split()))
        for j in range(1, len(e)):
            sum += (e[j]-q[i])
        sum += q[i]
    print(sum)
