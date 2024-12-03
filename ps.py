import sys
import os

# Debugging utility
def dbg(*args):
   # if "LOCAL" in os.environ:
    print("DEBUG:", *args, file=sys.stderr)

# Redirect input/output for local testing
#if "LOCAL" in os.environ:
sys.stdin = open("input.txt", "r")
sys.stdout = open("output.txt", "w")

# Solve function
def solve():
    t = int(input())  # Number of test cases
    for _ in range(t):
        # Your logic here
        n = int(input())
        print(n * n)    # Example output
        dbg(n*n*n)  

# Main execution
if __name__ == "__main__":
    solve()
