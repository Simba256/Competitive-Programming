n=int(input())
names=[]
scores=[]
a=input()
a.split()[0]
names.append(a.split()[0])
scores.append(int(a.split()[1]))
winner=names[0]
winscore=scores[0]
for k in range(n-1):
    a=input()
    name=a.split()[0]
    found=0
    for i in range(len(names)):
        if name==names[i]:
            scores[i]+=int(a.split()[1])
            if scores[i]>winscore:
                winscore=scores[i]
                winner=names[i]
            found=1
    if found==0:
        names.append(name)
        # a=int(input())
        if int(a.split()[1])>winscore:
            winscore=int(a.split()[1])
            winner=name
        scores.append(int(a.split()[1]))
print(winner)
