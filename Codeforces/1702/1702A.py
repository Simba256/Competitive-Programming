def printnum(a):
    flag=0
    for i in range(1,len(a)):
        if int(a[i])==0 and flag==0:
            continue
        else:
            flag=1
            print(a[i],end='')
    print('')
t=int(input())
for i in range(t):
    a=input()
    b=int(a[0])-1
    if len(a)>1:
        c=""
        for i in range(1,len(a)):
            c+=a[i]
        if int(c)==0 and int(a[0])==1:
            print(0)
            continue
    if b>0 or len(a)==1:
        print(b,end='')
    if b==0:
        printnum(a)
    else:
        for i in range(1,len(a)):
            print(a[i],end='')
        print('')
