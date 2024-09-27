t=int(input())
for m in range(t):
    a=input()
    if(len(a)>2 and a[0]=='R' and (a[1]=='1' or a[1]=='2' or a[1]=='3' or a[1]=='4' or a[1]=='5' or a[1]=='6' or a[1]=='7' or a[1]=='8' or a[1]=='9')):
    # print("rc")
        list=[]
        i=1
        while(a[i]!='C'):
            list.append(a[i])
            i+=1
        # print(list)
    # print("i=",i)
        col=0
        for j in range(i+1,len(a)):
            col+=int(a[j])
            col*=10
        col=int(col/10)
        col-=1
        # print("col=",col)
        conABC=[]
        # c=0
        while(col>=0):
            conABC.append(col%26)
            col-=(col%26)
            col=int(col/26)
            col-=1
            # print('here')/
        # print(conABC)
        # if len(conABC)>1:
        #     conABC[0]+=1
        for k in range(len(conABC)-1,-1,-1):
            print(chr(conABC[k]+65),end='')
        for k in list:
            print(k,end='')
        print('')
    else:
        i=0
        ans=0
        while(ord(a[i])>64):
            i+=1
        # print("i=",i) i=number of letters
        for k in range(i):
            ans+=(ord(a[k])-64)*(26**(i-1-k))
        print('R',end='')
        for k in range(i,len(a)):
            print(a[k],end='')
        print("C%d" % (ans))
