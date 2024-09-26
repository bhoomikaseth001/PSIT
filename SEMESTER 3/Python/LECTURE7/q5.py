#WAP which excepts an integer(n) and compute the value of n+nn+nnn....
n=int(input("Enter a number: "))
sum=0
c=1
while c<=n:
    sum+=pow(n,c)
    c+=1
print(sum)