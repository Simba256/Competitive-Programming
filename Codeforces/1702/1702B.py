def solve():
    a=input()
    d=1
    mylist=[]
# mylist.append(a[0])

    for i in range(len(a)):
        flag=0
        # print('flag = ',flag,'  ',mylist,"a[i]:",a[i],"a[i+1]:",a[i+1])
        for j in mylist:
            if j==a[i]:
                flag=1
        # print('flag = ',flag,'  ',mylist,"a[i]:",a[i],"a[i+1]:",a[i+1])
        if flag==0 and len(mylist)<3:
            mylist.append(a[i])

        elif flag==1:
            continue

        else:
            d+=1
            # print(mylist)
            mylist=[]
            mylist.append(a[i])

    print(d)
t=int(input())
for i in range(t):
    solve()
