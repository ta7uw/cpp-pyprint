#pragma once

#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<iostream>

using namespace std;

template<typename T>
void print(const vector<T> &v, bool endLine = true) {
    long long len = v.size();
    cout << "[";
    for (long long i = 0; i < len; ++i) {
        cout << v[i];
        if (i != len - 1) {
            cout << ", ";
        } else {
            cout << "]";
            if (endLine) cout << endl;
        }
    }
}

template<typename T1, typename T2>
void print(const pair<T1, T2> &p, bool endLine = true) {
    cout << "(" << p.first << ", " << p.second << ")";
    if (endLine) cout << endl;
}

template<typename T>
void print(const vector<vector<T>> &grid) {
    long long len = grid.size();
    cout << "[";
    for (long long i = 0; i < len; ++i) {
        print(grid[i], false);
        if (i != len - 1) cout << "," << endl;
    }
    cout << "]" << endl;
}

template<typename T1, typename T2>
void print(vector<pair<T1, T2>> &pairVec) {
    long long len = pairVec.size();
    cout << "[";
    for (long long i = 0; i < len; ++i) {
        print(pairVec[i], false);
        if (i != len - 1) cout << "," << endl;
    }
    cout << "]" << endl;
}

template<typename T>
void print(set<T> &s) {
    long long len = s.size();
    long long cnt = 0;
    cout << "(";
    for (auto it : s) {
        cout << it;
        if (cnt != len - 1) cout << ", ";
        cnt++;
    }
    cout << ")" << endl;
}

template<typename T1, typename T2>
void print(map<T1, T2> &dict) {
    long long len = dict.size();
    long long cnt = 0;
    cout << "(";
    for (auto it = dict.begin(); it != dict.end(); ++it) {
        cout << it->first << ": " << it->second;
        if (cnt != len - 1) cout << ", ";
        cnt++;
    }
    cout << ")" << endl;
}

template<typename T1, typename T2>
void print(unordered_map<T1, T2> &dict) {
    long long len = dict.size();
    long long cnt = 0;
    cout << "(";
    for (auto p: dict) {
        cout << p.first << ": " << p.second;
        if (cnt != len - 1) cout << ", ";
        cnt++;
    }
    cout << ")" << endl;
}
