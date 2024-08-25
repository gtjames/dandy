import sys

# Check if a name was provided as a command-line argument
if len(sys.argv) > 1:
    name = sys.argv[1]
    print(f"Hello, {name}!")
else:
    print("Hello, World!")
