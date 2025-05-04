l=[1,0,1,0,1,0,0,1]
c1=0
for i in l:
    if i==0:
        c1= c1+1
for i in range(0,c1):
    l[i]=0
for i in range(c1,len(l)):
    l[i]=1

print(l)
    