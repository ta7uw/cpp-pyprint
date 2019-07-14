# cpp-pyprint
Debugging tool that outputs C ++ container as if using python's print() function

## Supported containers

`vector<T>`, `pair<T1, T2>`, `vector<vector<T>>`, `vector<pair<T1, T2>>`,
`set<T>`, `map<T1, T2>`, `unordered_map<T1, T2>`

## How to use

### Add this repository to the same hierarchy as your source code  
    git clone https://github.com/ta7uw/cpp-pyprint.git  

### Include header file  
    #include "pyprint.h"
   
If you have configured debugging in your environment, you can define an include as follows:

CMakeLists.txt
```
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -D__DEBUG")
```

main.cpp
```cpp
#ifdef __DEBUG
#include "cpp-pyprint/pyprint.h"
#endif
```


### Use the print() function as follows

#### vector<T>
***

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
#### Input

```
8
9 6 3 2 5 8 7 4
```

#### Output
```
[9, 6, 3, 2, 5, 8, 7, 4]
```
#### vector<vector<T>>
***

```cpp
int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<int>> grid(H);
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            int c;
            cin >> c;
            grid[i].push_back(c);
        }
    }
    print(grid);
}


```

#### Input

```
3 5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
```

#### Output

```
[[1, 2, 3, 4, 5],
[6, 7, 8, 9, 10],
[11, 12, 13, 14, 15]]
```

### pair<T1, T2>
***

```cpp
int main() {
    int p1, p2;
    cin >> p1 >> p2;
    pair<int, int> p;
    p = {p1, p2};
    print(p);
}
```

#### Input

```
4 5
```

#### Output

```
(4, 5)
```
