# author:Hemant1101
# lang:  Python
# topic: Codechef problem ( file name is the problem code )

for t in range(int(input())):
    n,k= map(int,input().split())
    a=0
    b=0
    c=0
    l = list(map(int, input().split()))[:n]
    for i in range(n):
        if(l[i]==-1):
            a=a+1
        if(l[i]>k):
            b=b+1
        if(l[i]>1):
            c=c+1
    if(a>(n/2)):
        print("Rejected")
    elif(b>0):
        print("Too Slow")
    elif(c==0 and a==0):
        print("Bot")
    else:
        print("Accepted")
