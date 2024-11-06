str=input("Enter a string : ")
c1=c2=c3=c4=0
for ch in str:
    if(ch.islower()):
        c1=c1+1
    elif(ch.isupper()):
        c2=c2+1
    elif(ch.isdigit()):
        c3=c3+1
    else:
        c4=c4+1
print("Number of lowercase characters : ", c1)
print("Number of uppercase characters : ", c2)
print("Number of digit characters : ", c3)
print("Number of special characters : ", c4)

        

