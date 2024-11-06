'''List can have any number of elements and can be of any data type'''
T=[1,2,3,4,5,6]
c1=[x for x in T if x%2==0]
print(c1)
L1=[1,True,"abc"]
L1.append("New")
print(L1)