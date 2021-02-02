# author:Hemant1101
# lang:  Python
# topic: Codechef problems ( file name is the problem code )

for t in range(int(input())):
    n = int(input())
    a=0
    b=0
    l = list(map(int, input().split()))[:n]
    for i in range(n):
        if(l[i]%2==0):
            a=a+1
        else:
            b=b+1
    if(a==0 or b==0):
        print(0)
    else:
        print(min(a,b))



