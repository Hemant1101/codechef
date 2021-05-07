# codechef problem code is same as file name


def fastpower(a, b, n):
    res = 1
    while(b > 0):
        if((b & 1) != 0):
            res = (res*a % n) % n
        a = (a % n*a % n) % n
        b = b >> 1
    return res


for _ in range(int(input())):
    n = int(input())
    x = fastpower(2, n-1, 1000000007)
    print(x)
