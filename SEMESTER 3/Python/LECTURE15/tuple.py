'''any()
returns True if any of the element of the tuple is True and returns false if all the elements of the tuple is False'''

t1=(9,7,3,4)
print(any(t1))
t2=(0,1,0,0)
print(any(t2))
t3=(0,0,0,0)
print(any(t3))

'''sorted()
sort the elements of the tupleand return a new sorted list'''

t1=(9,7,5,4,3)
print(sorted(t1))
 
'''sum()
return the sum of all elements in the tuple'''
t1=(9,4,3,5,2)
print(sum(t1))

'''use case of tuple:
tuple can be used to return multiple values from a function tuples are more lightweight and faster '''

'''sets: a set is a heterogeneous collection of element, set is unordered seq, set is mutable in nature, set store unique values, it does not allow duplicate value. Set can have any no. of items an be of diff'''
s1={5,7,2,5,7,2}
print(s1)
t1=(10,5,2,8,8)
s2=set(t1)
print(s2)

#set don't support indexing or slicing
#print(s1[0])   typeError

#we cannot use + operator to combine two sets.
s1={1,2,3}+{4,5,6}
print(s1)




