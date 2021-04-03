for _ in range(int(input())):
    n = int(input())
    x = 0
    ans = 0
    if(n == 0):
        print(0)
    elif(n == 1):
        print(20)
    elif(n == 2):
        print(36)
    elif(n == 3):
        print(51)
    elif(n == 4):
        print(60)
    elif(n > 4):
        if(n % 4 == 0):
            x = ((n-4)//4)*44
            ans = x+60
            print(ans)
        elif(n % 4 == 1):
            x = ((n-5)//4)*44
            ans = x+20+11+45
            print(ans)
        elif(n % 4 == 2):
            x = ((n-6)//4)*44
            ans = x+22+36+30
            print(ans)
        elif(n % 4 == 3):
            x = ((n-7)//4)*44
            ans = x+15+33+51
            print(ans)
