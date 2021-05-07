# codechef problem code is same as file name


def isMember(a, d, x):

    if d == 0:
        return x == a

    return ((x - a) % d == 0 and
            int((x - a) / d) >= 0)


for _ in range(int(input())):
    n, x, k = map(int, input().split())
    if (x % k == 0):
        print("YES")
    elif(x == n+1):
        print("YES")
    else:
        c = (n+1) % k
        if(isMember(c, k, x)):
            print("YES")
        else:
            print("NO")
