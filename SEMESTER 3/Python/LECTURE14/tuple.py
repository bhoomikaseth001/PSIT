'''A tuple is a heterogeneous collection of elements. 
Tuples are immutable in nature. '''
#creating tuple
a=(10,20.55,True)
print(type(a))
print(a)
#tuple(123)
#tuple(20,"ab")
print(tuple([123]))
t1=(10,44,False)
t2=("a","z","10.22")
t3=("abc",True,123)
t4=(t1,t2,t3)
print(t4[1])
print(t4[1][0])
for i in t4:
    for j in i:
        print(j,end=" ")
print("\n")


t1=(10,20,30,40,True,"ab","XYZ")
print(t1[-5])
#print(t1[7]) -> error : index out of bound
#print(t1[2.5]) ->error: tuple indices must be integers or slices, not float
#print(t1['a']) ->error: tuple indices must be integers or slices, not float

'''We cannot delete or remove elements from tuple. We can delete the whole tuple using 'del'  keyword'''

#del t1[1] 
#t1[0]=124
del t1

'''We can access a range of elements from a tuple by using slicing'''

t1=(10,20,30,40,True,"ab","XYZ")
print(t1[2:5])
print(t1[:])
print(t1[::2])
print(t1[2:6:2])
print(t1[-1:-4])
print(t1[-5:-1])
print(t1[-1:-5:-1])
print(t1[::-2])

'''We can use + operator to combine 2 tuples, this called tuple comparision .We can repeat the elements in the tuple for a given number of times using * operator'''
t1=(10,44,False)+('a','b','c')
print(t1)

t1=(1,3,4)
t2=t1*3
print(t2)

'''We can compare the elements of tuple using comparision operator.'''
t1=(6,0)
t2=(5,1,2)
if t1>t2:
    print("t1 is bigger")
else:
    print("t2 is bigger")

'''We can access the number of values in tuple using len(). We can access the minimum and maximum element in tuple by using min() and max(). '''

