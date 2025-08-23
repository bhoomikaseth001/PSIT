#WAP that uses class to store the name and marks of students. 
# Use list to store the marks in three subjects.

class Student:
    def __init__(self, name, marks):
        self.name = name
        self.marks = marks  

    def display(self):
        print(f"Name: {self.name}")
        print("Marks in three subjects:", self.marks)


name = input("Enter the student's name: ")
marks = []

for i in range(3):
    mark = int(input(f"Enter mark for subject {i + 1}: "))
    marks.append(mark)

student1 = Student(name, marks)

student1.display()
