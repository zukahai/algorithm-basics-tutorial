class Student:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def __str__(self):
        return f"Name = {self.name}, Age = {self.age}"
    
    def hello(self):
        return "abc"

class StudentIT(Student):
    def __init__(self, name, age, score):
        super().__init__(name, age)
        self.score = score

    def hello(self):
        return "xyz"
    
    def get(self):
        return super().hello()

    def __str__(self):
        return f"Name = {self.name}, Age = {self.age}, Score = {self.score}"
    
if __name__ == "__main__":
    s = StudentIT("Hai", 20, 10)
    print(s.get())
    print("Dang file Main.py")

