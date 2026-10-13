# Python Notes 💯

interpreted and dynamically typed

### 🔤 Writing Conventions

| Element | Example |
|---|---|
| variables | `my_iterator, my_pointer` |
| functions | `my_solved(), calculate_path()` |
| classes | `SegmentTree, TreeNode` |
| constants | `PI, INF_INT` |

```python
# this is a single line comment

"""
this is a
block comment
"""

# Data Types (most used): 
damage_points, distance_to_sun = -10, 149600000000      # Integer           (int)
short_pi, pi = 3.1416, 3.1415926535                     # Floating Point    (float)
is_valid = True                                         # Boolean           (bool) 
first_name = "Frank"                                    # Text string       (str)

# Constants
PI = 3.141592653589793
MODULE = 1000000007

# Arithmetic Operators
a, b = 3, 8
sum = a + b             # sum = 11          '+' operator, for integers and floating point numbers
sub = a - b             # sub = -5          '-' operator, for integers and floating point numbers
mul = a * b             # mul = 24          '*' operator, for integers and floating point numbers
divA = b / a            # divA = 2.67       '/' operator, the result is floating point numbers
divB = b // a           # divB = 2          '//' operator, rounds to the floor integer
divC = -b // a          # divC = -3             -2.67, the floor is -3
mod = b % a             # mod = 2           '%' operator, for intergers only
pwr = b ** a            # pwr = 512         '**' operator, for simple powers

# Compound Assignment
a += 5                  # a = a + 5        +=, -=, *=, /=, //=, %=, **=

# Logical Operators
a, b = True, False
resultAnd = a and b             # True only if both (a and b) are True
resultOr = a or b               # False only if both (a and b) are False
resultNot = not a               # True if a is False, False if a is True

# Conditional Structures
if condition:                   # if / elif / else
    # It execute if condition is true. After execution, exit the entire if / elif / else structure
elif condition2:
    # It execute if condition2 is true. After execution, exit the entire if / elif / else structure
else:
    # It execute if no previous if / elif condition was true

a, b = 1, 3
maximum = a if a > b else b     # Conditional Operator, maximum is a if the condition is true, otherwise b
```

### Example Code

```python
import random                               # To use random.randint()

def get_ramdom_int(min, max):               # Inclusive min and max
    return random.randint(min, max)

print(f"This is a random int number: {get_ramdom_int(0, 10)}")
```

### Example Code CP (Template)

```python
import sys                                              # Fast I/O and system configurations
import math                                             # Fast math operations (gcd, lcm, sqrt)
from collections import deque, Counter, defaultdict     # Useful data structures (BFS, frequencies)
import itertools                                        # Combinatorics and fast iterators (permutations)

# Optimization of standard input and output
input = sys.stdin.readline
print = lambda *args, **kwargs: sys.stdout.write(" ".join(map(str, args)) + kwargs.get("end", "\n"))

# Increase the recursion limit
sys.setrecursionlimit(200000)

# Useful constants
INF = float('inf')
MOD = 10**9 + 7

def solve():
    # Logic for the problem solution
    pass

if __name__ == "__main__":
    solve()
```