#WAP to find biggest of given 2 numbers from the command prompt
num1=int(input("Enter 1st number  : "))
num2=int(input("Enter 2nd number : "))

if num1>num2:
    print(num1," is greater ")
elif num2>num1:
    print(num2," is greater")
else:
    print("Both numbers are equal")