# Simple Python Program Structure

# Importing necessary libraries (if needed)
import math

# Defining a function
def greet_user(name):
    print(f"Hello, {name}! Welcome to the Python program.")

# Main entry point
def main():
    # Asking for user input
    user_name = input("Please enter your name: ")
    greet_user(user_name)

    # Example of an if-else condition
    age = int(input("How old are you? "))
    if age >= 18:
        print("You are an adult!")
    else:
        print("You are a minor!")

    # Example of a loop (counting to 5)
    print("Counting to 5:")
    for i in range(1, 6):
        print(i)

    # Example of a simple calculation using math module
    number = float(input("Enter a number to find its square root: "))
    square_root = math.sqrt(number)
    print(f"The square root of {number} is {square_root:.2f}")

# Calling the main function to run the program
if __name__ == "__main__":
    main()
