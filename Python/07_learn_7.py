class calculator:
    def __init__(self, n,):
        self.n = n
    def square(self):
        print(f"The square of number is {self.n * self.n}")

    def cube(self):
        print(f"The cube of number is {self.n * self.n * self.n}")

    def squareroot(self):
        print(f"The square root of number is {self.n ** 0.5}")
    
    def factorial(self):
        if self.n < 0:
            print("Factorial is not defined for negative numbers")
        elif self.n == 0 or self.n == 1:
            print("The factorial of number is 1")
        else:
            fact = 1
            for i in range(2, self.n + 1):
                fact *= i
            print(f"The factorial of number is {fact}")

    @staticmethod
    def greet():
        print("Welcome to the calculator program!")
calculator.greet()
a = int(input("Enter a number: "))
a = calculator(a)

a.square()
a.cube()
a.squareroot()
a.factorial()