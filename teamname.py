# author: Hemant1101
# lang:   python
# topic:  codechef problem (file name is problem code)

# first attempt wrong + tle
"""
for t in range(int(input())):
    n = int(input())
    s = list(map(str, input().split()))[:n]
    count = 0
    for i in range(n):
        for j in range(1, n):
            temp1 = s[i][0]+s[j][1:]
            temp2 = s[j][0]+s[i][1:]
            if(s[i][0] != s[j][0] and temp1 not in s and temp2 not in s):
                count = count+2
    print(count)
"""
# second attempt partially correct 2 test case tle

from itertools import combinations
for t in range(int(input())):
    n = int(input())
    s = list(map(str, input().split()))[:n]
    count = 0
    for i, j in combinations(range(0, n), 2):
        temp1 = s[i][0]+s[j][1:]
        temp2 = s[j][0]+s[i][1:]
        if(s[i][0] != s[j][0] and temp1 not in s and temp2 not in s):
            count = count+2
    print(count)
