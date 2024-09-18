x=[10,20,30,40]
b=bytes(x)
print(type(b))
print(b[0])

x=10+3*2
print(x)
import math
x=-4.6
print(abs(x))
print(round(x))
print(math.floor(x))
print(math.ceil(x))
print(math.factorial(5))


#if applicant has high income and good credit then he or she is eligible for loan
high_inc=True
good_cred=True
if high_inc and good_cred:
    print("Eligible")
elif high_inc or good_cred:
    print("Not Eligible")


