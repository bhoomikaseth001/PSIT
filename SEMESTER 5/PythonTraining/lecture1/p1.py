import numpy as np
# #printing 2D array
# n1=np.array([[10,20,30,40],[1,2,3,4]])
# print(n1)


# #attributes in numpy
# # .shape, .size, .ndim, .dtype

# print(n1.shape)  #(rows, columns)
# print(n1.size)   # total number of elements
# print(n1.ndim)   # number of dimensions
# print(n1.dtype)  # data type of elements


# #Create 2 1D arrays each of 5 elements apply vector operations such as addition and substraction

# a1 = np.array([1,2,3,4,5])
# a2 = np.array([10,20,30,40,50])
# a3=a1+a2
# print(a3)

# # .zeros
# c1 = np.zeros((2,3)) #this will print the floating type array of shape (2,3)
# c2 = np.zeros((2,3), dtype=int) #this will print the integer type array of shape (2,3)
# print(c1)
# print(c2)

# #.ones
# c3= np.ones((3,2),dtype=int)
# print(c3)

# #create an identity matrix using .eye method
# c4 = np.eye(3,dtype=int)
# print(c4)

# #create a 3d array of shape 4,3,2 with all zero elements
# arr = np.zeros((4,3,2),dtype=int)
# print(arr)
# # 4 is the height of 3d array or the number of 2d arrays, 
# # 3 is the number of rows in each 2d array, 
# # and 2 is the number of columns in each 2d array.


# p1= np.array([10,20,30,40,50])
# print(p1>25)

#apply logical not operation on an input array
d1=np.eye(3,dtype=int)
d2= np.logical_not(d1).astype(int)
print(d2)


#create an array of 3 elements 5,7,9 create the deep(.copy method) and shallow copy(.view method)of this array
x=np.array([5,7,9])
x1=x.copy()
x2=x.view()
print(x1)
print(x2)


#broadcasting
y = np.array([[1], [2], [3]])
z = np.array([4, 5, 6])
print(y + z)

#array reshape and flatten

# create a 2d array of shape 4X2 and reshape it into 2X4
a=np.array([[1,2],[3,4],[5,6],[7,8]])
b=a.reshape(2,4)
print(b)

# for flatten operation
c=a.ravel()
print(c)

#indexing and slicing
#consider a 2d array of shape 4X2
print(a[:,0])
print(a[:,1:3])
