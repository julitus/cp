# C++ Notes 💯

compiled and typed

### 🔤 Writing Conventions

| Element | Example |
|---|---|
| variables | `myIterator, myPointer` |
| functions and methods | `mySolved(), calculatePath()` |
| classes and structures | `SegmentTree, TreeNode` |
| constants | `PI, INF_INT` |

```cpp
// this is a single line comment

/*
this is a
block comment
*/

// Data Types (most used): 
int damagePoints = -10, age{25};            // Integer:     (4 Bytes) -2.147.483.648 to 2.147.483.647
long long distanceToSun = 149600000000LL;   // Integer:     (8 Bytes) -9.223.372.036.854.775.808 to 9.223.372.036.854.775.807
float shortPi = 3.1416f;                    // Decimal:     (4 Bytes) 3.4E +/- 38 (7 digits)
double pi = 3.1415926535;                   // Decimal:     (8 Bytes) 1.7E +/- 308 (15 digits)
bool isValid = true;                        // Boolean:     (1 Bytes) false or true, 0 or 1
char number = '5', letter{'a'};             // Character:   (1 Bytes) -128 to 127
string firstName = "Frank";                 // Text string: container class

// Constants
const double PI = 3.141592653589793;
const long long MODULE = 1000000007;
```

### Example Code

```cpp
#include <iostream>                         // To use cout
#include <cstdlib>                          // To use rand() y srand()
#include <ctime>                            // To use time(0)

using namespace std;

int getRandomInt(int min, int max)          // Inclusive min and max
{
    return min + rand() % (max - min + 1);
}

int main()
{
    srand(time(0));

    cout << "This is a random int number: " << getRandomInt(0, 100);
    return 0;
}
```

### Exmaple Code CP (Template)
```cpp
#include <bits/stdc++.h>        // Includes the entire standard library

using namespace std;            // Allows using standard library features without "std::"

// Shorthand data types for faster use
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using vi = vector<int>;

// Useful constants
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;
const double PI = 2*acos(0.0);

void solve()
{
    // Logic for the problem solution
}

int main()
{
    // Optimization of standard input and output
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}
```