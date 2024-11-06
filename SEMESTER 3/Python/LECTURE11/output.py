x=[1,2,3,4]
y=[a*2 for a in x if a%2 ==0]
print(y)

def fun(a,b=[]):
    b.append(a)
    return b

print(fun(1))
print(fun(2))
print(fun(2,[]))

x=0b1101
y=0b1011
print(bin(x|y))

