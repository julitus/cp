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
int damagePoints = -10, age{25};            // (4 Bytes) -2.147.483.648 to 2.147.483.647
long long distanceToSun = 149600000000LL;   // (8 Bytes) -9.223.372.036.854.775.808 to 9.223.372.036.854.775.807
float shortPi = 3.1416f;                    // (4 Bytes) 3.4E +/- 38 (7 digits)
double pi = 3.1415926535;                   // (8 Bytes) 1.7E +/- 308 (15 digits)
char number = '5', letter{'a'};             // (1 Bytes) -128 to 127
bool isValid = true;                        // (1 Bytes) false or true, 0 or 1

// constants
const double PI = 3.141592653589793;
const long long MODULE = 1000000007;
```

### Example Code

```cpp
#include <bits/stdc++.h>        // for competitive programming only
using namespace std;

int getRandomInt(int min, int max) 
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