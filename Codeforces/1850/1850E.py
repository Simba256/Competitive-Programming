import math
t = int(input())
# print(t,type(t))
for i in range(t):
    n,d = map(int, input().strip().split())
    list = map(int, input().strip().split())
    a = 4*n
    b = 0
    c = -1*d
    for j in list:
        b += 4*j
        c += j**2
    # print(a,b,c)
    print(int((-b+math.sqrt(b**2-4*a*c))/(2*a)))