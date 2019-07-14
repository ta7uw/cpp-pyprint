# cpp-pyprint
Debugging tool that outputs C ++ container as if using python's print () function

## How to use

### Add this repository to the same hierarchy as your source code  
    git clone https://github.com/ta7uw/cpp-pyprint.git  

### Include header file  
    #include "pyprint.h"
   

### Use the print () function as follows
```cpp
int main() {
    int N;
    cin >> N;
    vector<int > a;
    for (int i = 0; i < N; ++i) {
        int s; cin >> s;
        a.push_back(s);
    }
    print(a);
}
```
#### Output
```
9
9 6 3 2 5 8 7 4 1
```
