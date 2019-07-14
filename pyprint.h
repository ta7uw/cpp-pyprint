#pragma once

#include<vector>
#include<iostream>

using namespace std;

template<typename T>

void print(const vector<T> &v) {
    int len = v.size();
    for (int i = 0; i < len; ++i) {
        cout << v[i];
        if (i != len - 1) {
            cout << ", ";
        }
    }
}
