
import matplotlib.pyplot as plt
import numpy as np 

# x=np.linspace(0,5,11)
# y=x**2
# x=[1,2,3,4,5]
# y1=[10,20,30,40,50]
# y2=[20,30,40,10,60]
# plt.plot(x,y1,label="first line")
# plt.plot(x,y2,label="second line")
# plt.legend(title="performance",loc="upper center")
# plt.show()


# x=[1,2,3,4,5,6,7,8]
# y1=[5,2,4,2,1,4,5,2]
# plt.scatter(x,y1,label="points",marker="*")
# plt.legend()
# plt.xlabel("x-axis")
# plt.ylabel("y-axis")
# plt.title("scatter plot")
# plt.show()

Stud_detail=["Excellent","Good","Average","Need_imp"]
stud_num=[45,50,30,5]
plt.pie(stud_num,labels=Stud_detail)
plt.legend()
plt.title("Pie Chart")
plt.show()
