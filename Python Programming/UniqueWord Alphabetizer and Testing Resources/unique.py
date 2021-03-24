file = input("Enter File Name: ")
myList =[]

readFile = open(file, 'r')

for line in readFile:
   myList.extend(line.split(" "))

myList.sort()

print(myList)
