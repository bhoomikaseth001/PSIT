# WAP in python, create a class called Person with the following attributes:
# - name
# - age
# and the elder one of the two persons should be pay the bill by using the inbuilt method such as __le__,__lt__.

class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def __lt__(self, other):
        return self.age < other.age

    def __le__(self, other):
        return self.age <= other.age

    def pay_bill(self, other):
        if self < other:
            return f"{other.name} pays the bill."
        elif self > other:
            return f"{self.name} pays the bill."
        else:
            return "Both are of the same age, they can split the bill."
