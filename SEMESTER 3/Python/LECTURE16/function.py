def f1():
    print("Hello")

print(f1)
print(type(f1)) #prints the name of the class

x=5
y=5
z=5
print(id(x),id(y),id(z))
z=z+1
print(z)
print(id(x),id(y),id(z))
#if an object is immutable then it is also hashable
l1=[1,2,3,4]  #list is mutable
l2=1,2,3,4   #tuple is immutable

a={1,2,3,4,5,5} #stored on the basis of their hash values 
b={0,False,True,2,3,1,5} # no. of elements = 4 (False and 0 , True and 1 will have the same hash value)
print(b)
print(hash(0),hash(False))

d={0:1,False:'a','b':True,1:{2,3,1,5}}
# e={{1,2}:[1,2]} #it is throwing error as key must be hashable and set is not hashable\ 
print(d)
print(type({}))

c=[1,2,3,4,5]
b.add(c)
print(hash(b))

l1=[1,2,3]
l2=l1
print(l1)


def f2(l1):
    return "hello"
print(f2())


