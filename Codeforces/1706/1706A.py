def solve():
    mn=[]
    mn=list(map(int,input().split()))
    n=mn[0]
    m=mn[1]
    aas=[]
    str=[]
    for j in range(m):
        str.append('B')
    aas=list(map(int,input().split()))
    # for j in range(n):
    #     aas.append(int(input())-1)
    # print(aas)
    for j in aas:
        j=j-1
        if j<m-1-j:
            if str[j]=='B':
                str[j]='A'
            elif str[m-1-j]=='B':
                str[m-1-j]='A'
        else:
            if str[m-1-j]=='B':
                str[m-1-j]='A'
            elif str[j]=='B':
                str[j]='A'
    for j in str:
        print(j,end='')
    print('')
t=int(input())
for i in range(t):
    solve()
