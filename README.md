# cpp-pyprint
Debugging tool that outputs C ++ container as if using python's print () function

## Supported containers

`vector<T>`, `pair<T1, T2>`, `vector<vector<T>>`, `vector<pair<T1, T2>>`,
`set<T>`, `map<T1, T2>`, `unordered_map<T1, T2>`

## How to use

### Add this repository to the same hierarchy as your source code  
    git clone https://github.com/ta7uw/cpp-pyprint.git  

### Include header file  
    #include "pyprint.h"
   
If you have configured debugging in your environment, you can define an include as follows:

```cpp
#ifdef __DEBUG
#include "cpp-pyprint/pyprint.h"
#endif
```


### Use the print() function as follows

#### vector
```cpp
int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (auto& v: a) {
        cin >> v;
    }
    print(a);
}
```
#### Output
```
9, 6, 3, 2, 5, 8, 7, 4, 1
```
