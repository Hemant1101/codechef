# author: Hemant1101
# lang:   python
# topic:  codechef problem (file name is problem code)

# mycode TLE
##############################################
# from itertools import combinations

# for t in range(int(input())):
#     n = int(input())
#     a = list(map(int, input().split()))[:n]
#     f = [abs(a[x]-a[y])+abs(a[y]-a[z])+abs(a[z]-a[x])
#          for x, y, z in combinations(range(0, n), 3)]
#     print(max(f))
################################################
# submitted 
for t in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))[:n]
    m = min(a)
    p = max(a)
    v = (p-m)*2
    print(v)
