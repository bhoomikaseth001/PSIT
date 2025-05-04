l=[2,5,3,7,8,1,9]
l1=[]
l1 =[-1]
for i in range(1,len(l)):
    if l[i-1]<l[i]:
        l1.append(l[i-1])
        prev=l1[i]
    elif prev<l[i]:
        l1.append(prev)
    else:
        l1.append(-1)

print(l1)

        