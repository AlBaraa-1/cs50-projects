from cs50 import get_int

# Initialize height variable
height = -1

# Prompt user for a valid height
while height < 1 or height > 8:
    height = get_int("Height: ")

# Print the pyramid
for i in range(height):
    # Print spaces
    for j in range(height - i - 1):
        print(" ", end="")
    # Print hashes
    for k in range(i + 1):
        print("#", end="")
    # Move to the next line
    print()
