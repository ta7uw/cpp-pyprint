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
        }else{
            cout << endl;
        }
    }
}

template<typename T1, typename T2>
void print(const pair<T1, T2> &p) {
     cout << "(" <<  p.first << ", " << p.second << ")" << endl;
}
