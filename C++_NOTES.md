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
int damagePoints = -10, age{25};            // Integer:         (4 Bytes) -2^31 to 2^31 - 1
long long distanceToSun = 149600000000LL;   // Integer:         (8 Bytes) -2^63 to 2^63 - 1
float shortPi = 3.1416f;                    // Floating Point:  (4 Bytes) 3.4E +/- 38 (7 digits)
double pi = 3.1415926535;                   // Floating Point:  (8 Bytes) 1.7E +/- 308 (15 digits)
bool isValid = true;                        // Boolean:         (1 Bytes) false or true, 0 or 1
char number = '5', letter{'a'};             // Character:       (1 Bytes) -128 to 127
string firstName = "Frank";                 // Text string:     container class

// Constants
const double PI = 3.141592653589793;
const long long MODULE = 1000000007;

// Arithmetic Operators
int a = 3, b = 8;
float c = 2.0f;
int sum = a + b;        // sum = 11         '+' operator, for integers and floating point numbers
int sub = a - b;        // sub = -5         '-' operator, for integers and floating point numbers
int mul = a * b;        // mul = 24         '*' operator, for integers and floating point numbers
int divA = b / a;       // divA = 2         '/' operator, for integers, the result is truncated
float divB = a / c;     // divB = 1.5f      '/' operator, for floating point numbers
int mod = b % a;        // mod = 2          '%' operator, for intergers only

// Compound Assignment
a += 5;                 // a = a + 5        +=, -=, *=, /=, %=

// Increment and Decrement
++a, a++;               // Pre-increment, post-increment
--a, a--;               // Pre-decrement, post-decrement
b = ++a;                // If a = 5, then after execution b = 6 and a = 6
b = a++;                // If a = 5, then after execution b = 5 and a = 6
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