import math
# def pow(a,b):
#     s=1
#     for i in range(b):
#         s*=a
#     return s
#
# def make9s(a):
#     num=99
#     for i in range(2,a):
#         num+=9*(10**i)
#     return num
#
# def make1s(a):
#     num=11
#     for i in range(2,a):
#         num+=10**i
#     return num

# def getFirstDigit(num):
#     return int(num / 10 ** int(math.log10(num)))

def solve():
    n=int(input())
    num=input()
    # f=int(num/pow(10,n-1))
    # print(num)
    if(num[0]=='9'):
        # x = [int(a) for a in str(num)]
        # print(num)
        # print(n)
        ones=[]
        newlist=[]
        for i in range(n):
            ones.append('1')
        # print(ones)
        for i in range(n-1,0,-1):
            if int(ones[i])-int(num[i])<0:
                ones[i-1]='0'
                newlist.append(chr(int(ones[i])+10-int(num[i])))
            else:
                newlist.append(chr(int(ones[i])-int(num[i])))
            # print(ones)
            # print(newlist)
        newlist.append(chr(10+int(ones[0])-int(num[0])))
        # flag=0
        # print(newlist)
        for i in range(n-1,-1,-1):
            # if int(i)==0 and flag==0:
            #     continue
            # else:
                # flag=1
            print(ord(newlist[i]),sep='',end='')
        print()
    else:
        # x = [int(a) for a in str(num)]
        for i in range(n):
            print(9-int(num[i]),sep='',end='')
        print()

t=int(input())
for i in range(t):
    solve()
