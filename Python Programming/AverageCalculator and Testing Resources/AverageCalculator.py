def main():
    file = input("What is name of file? ")
    data = open(file, "r")
    info = data.read().split()
    numbers = []
    for line in info:
        numbers.append(int(line))
        data.close()
        avg = float(sum(numbers))/len(numbers)
        print("Calculated average is",avg)
        
main()

