#for heterogeneous data
#in order to handle the labelled data on pandas these are required
# series - 1d data
# dataframe - 2d data
# panel - 3d data
# panel 4d - 4d data

#create a series using a list of following elements

import pandas as pd
s1=pd.Series([10,20,30,40])
#print(s1)
s2 = pd.Series([10,20,30,40], index=['a','b','c','d'])
#print(s2)

#using dictionary
s3 = pd.Series({'a':10, 'b':20,'c':30,'d':40})
#print(s3)

#create a series using a scalar
s4 = pd.Series(5, index=['a','b','c','d'])
#print(s4)


#access the 3rd element from the series s3
#print(s3[2])
#print(s3['c']) #both will give the same output

#vector operations on series
s5 = s1+s3
print(s5)
s6 = s2+s3
#print(s6)

s7=pd.Series([100,200,300,400], index=['a', 'd', 'e', 'f'])
#print(s7)

s8=s4+s7
print(s8)

#create a dataframe to store student's personal details like first name, last name, age and city. Store the details of atleast 5 students
df1=pd.DataFrame({
    'first_name':['John', 'Jane', 'Jim', 'Jack', 'Jill'],
    'last_name':['Doe', 'Smith', 'Brown', 'Johnson', 'Williams'],
    'age':[16, 21, 22, 23, 24],
    'city':['Kanpur','Lucknow','Kanpur','Lucknow','Kanpur']
})
print("\n",df1)

#create 5 series to  do the same
s1=pd.Series(['John', 'Jane', 'Jim', 'Jack', 'Jill'])
s2=pd.Series(['Doe', 'Smith', 'Brown', 'Johnson', 'Williams'])
s3=pd.Series([16, 21, 22, 23, 24])
s4=pd.Series(['Kanpur','Lucknow','Kanpur','Lucknow','Kanpur'])

df2=pd.DataFrame({'first_name':s1,
                  'last_name':s2,
                  'age':s3,
                  'city':s4})
#print(df2)

#print all the ages
#print(df1['age'])

#print all the cities and last name of the students
# print(df1['last_name','city'])  # this will give error
#print(df1[['last_name','city']])  #2 brackets since it is 2d 

#find the details of the students who lives in kanpur
#print(df1[df1['city']=='Kanpur'])   #df1['city']=='Kanpur' this will give the true and false values

#find the details of the students where age is greater than 20
#print(df1[df1['age']>20])

#find the first name of the students where age is greater than 20
#print(df1[df1['age']>20]['first_name'])

#find the first and last name of the students where age is greater than 20
#print(df1[df1['age']>20][['first_name','last_name']])

#to delete all the records where input is NaN-- use .dropna() method
# delete all null values from a series

s5.dropna()
#print(s5)

#using .dropna() with dataframe will delete the row having NaN values



#another way
print(s8.fillna(0))  #fill all NaN values with 0

#loc = when we want to use the column label and
#  iloc = if we want to use the integer index of the column 

#find the first name and age of students who lives in lko using loc method
print(df1[df1['city']=='Lucknow'].loc[:,['first_name', 'age']])

#find the first name and age of students who lives in lko using iloc method
print(df1[df1['city']=='Lucknow'].iloc[:,[0,2]])

#head() method =  it will by default fetch the first 5 rows of the  dataset
print("\n",df1.head())
print(df1.head(3))
print(df1.tail())  #it will cover last 5 tuples from the tuple
print(df1.tail(3))
print(df1.info())