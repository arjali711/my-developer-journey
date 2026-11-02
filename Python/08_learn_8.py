import random
class train:
    def __init__(self, trainNo):
        self.trainNo = trainNo

    def book(self, to, destination):
        print(f"\nBooking confirmed for train number {self.trainNo} from {to} to {destination}\n")

    def getstatus(self):
        print(f"Train number {self.trainNo} will be on time and will succesfully move! \n")

    def getfare(self, to, destination):
        print(f"The fare for train number {self.trainNo} from {to} to {destination} is {random.randint(100, 500)} Rs/-")

    @staticmethod
    def greet():    
        print("Welcome to the train booking system!") 

train.greet()
a = int(input("Enter train number: "))
if(a < 1000 or a > 9999):
    print("Invalid train number. Please enter a 4-digit train number.")
    exit()
a = train(a)
to = input("Enter starting location: ")
destination = input("Enter destination: ")

if(to == destination):
    print("Starting location and destination cannot be the same.")
    exit()
elif(to == "" or destination == ""):
    print("Starting location and destination cannot be empty.")
    exit()


a.book(to, destination)
a.getstatus()
if(to=="karachi".lower and destination=="lahore".lower):
    print("No direct train available from karachi to lahore.")
    exit()
elif(to=="lahore".lower and destination=="karachi".lower):
    print("train is not available from lahore to karachi")
    exit()
else:
    print(f"Train is available from {to} to {destination}\n")
a.getfare(to, destination)


