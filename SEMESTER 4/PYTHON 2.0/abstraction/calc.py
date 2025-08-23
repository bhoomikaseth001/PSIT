class Calculator:
    def _init_(self):
        pass

    def add(self, a, b):
        return self.__add(a, b)

    def subtract(self, a, b):
        return self.__subtract(a, b)

    def multiply(self, a, b):
        return self.__multiply(a, b)

    def divide(self, a, b):
        if b == 0:
            raise ValueError("Cannot divide by zero.")
        return self.__divide(a, b)

    # Private methods for internal calculations
    def __add(self, a, b):
        return a + b

    def __subtract(self, a, b):
        return a - b

    def __multiply(self, a, b):
        return a * b

    def __divide(self, a, b):
        return a / b
# Example usage
if __name__ == "__main__":
    calc = Calculator()
    print("Addition:", calc.add(5, 3))
    print("Subtraction:", calc.subtract(5, 3))
    print("Multiplication:", calc.multiply(5, 3))
    print("Division:", calc.divide(5, 3))