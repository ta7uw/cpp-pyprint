#pragma once

#include<vector>
#include<iostream>

using namespace std;

template<typename T>

void print(const vector<T> &v, bool endLine = true) {
    int len = v.size();
    cout << "[";
    for (int i = 0; i < len; ++i) {
        cout << v[i];
        if (i != len - 1) {
            cout << ", ";
        }else{
            cout << "]";
            if(endLine) cout << endl;
        }
    }
}

template<typename T1, typename T2>
void print(const pair<T1, T2> &p) {
     cout << "(" <<  p.first << ", " << p.second << ")" << endl;
}

template<typename T> void print(const vector<vector<T>> &grid) {
    int len = grid.size();
    cout << "[";
    for (int i = 0; i < len; ++i) {
        print(grid[i], false);
        if (i != len -1) cout << "," << endl;
    }
    cout << "]" << endl;
}
