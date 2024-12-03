import sys
import os

# Debugging utility
def dbg(*args):
#if "LOCAL" in os.environ:
    print("DEBUG:", *args, file=sys.stderr)

# Redirect input/output for local testing
#if "LOCAL" in os.environ:
sys.stdin = open("input.txt", "r")
sys.stdout = open("output.txt", "w")

# Solve function
def solve():
    t = int(input())  # Number of test cases
    # Store results for all test cases
    for _ in range(t):
        l = list(map(int, input().split()))  # Read and convert input to a list of integers
          # Save the result for this test case
        print(l)
         # Print each result on a new line
        print (l[0])

# Main execution
if __name__ == "__main__":
    solve()
