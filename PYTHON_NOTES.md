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
damage_points, distance_to_sun = -10, 149600000000      # Integer       (int)
short_pi, pi = 3.1416, 3.1415926535                     # Decimal       (float)
is_valid = True                                         # Boolean       (bool) 
first_name = "Frank"                                    # Text string   (str)

# Constants
PI = 3.141592653589793
MODULE = 1000000007
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