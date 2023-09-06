# Create an empty list to store integers
integer_list = []

# Prompt the user to enter 10 integers and add them to the list
for i in range(10):
    try:
        num = int(input(f"Enter integer {i + 1}: "))
        integer_list.append(num)
    except ValueError:
        print("Invalid input. Please enter an integer.")

# Display the array items
print("Array items:")
for i in range(len(integer_list)):
    print(f"Index {i}: {integer_list[i]}")

# Compute the sum of the array elements
array_sum = sum(integer_list)
print(f"Sum of array elements: {array_sum}")
