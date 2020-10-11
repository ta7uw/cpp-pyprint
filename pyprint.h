#pragma once

#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<iostream>

void print() {
    // nop
}

template<class Head, class... Tail>
void print(Head &&head, Tail &&... tail) {
    std::cout << head;
    if (sizeof...(tail) != 0) {
        std::cout << ',';
    } else {
        std::cout << '\n';
    }
    print(std::forward<Tail>(tail)...);
}

template<typename T>
std::ostream &operator<<(std::ostream &os, const std::vector<T> &v) {
    int len = v.size();
    os << "[";
    for (int i = 0; i < len; ++i) {
        os << v[i];
        if (i != len - 1) {
            os << ", ";
        }
    }
    os << "]";
    return os;
}

template<typename T1, typename T2>
std::ostream &operator<<(std::ostream &os, std::pair<T1, T2> &p) {
    os << "(" << p.first << ", " << p.second << ")";
    return os;
}

template<typename T>
std::ostream &operator<<(std::ostream &os, const std::set<T> &s) {
    int len = s.size();
    int cnt = 0;
    std::cout << "(";
    for (auto it : s) {
        std::cout << it;
        if (cnt != len - 1) std::cout << ", ";
        cnt++;
    }
    std::cout << ")";
    return os;
}

template<typename T>
std::ostream &operator<<(std::ostream &os, const std::unordered_set<T> &s) {
    int len = s.size();
    int cnt = 0;
    std::cout << "(";
    for (auto it : s) {
        std::cout << it;
        if (cnt != len - 1) std::cout << ", ";
        cnt++;
    }
    std::cout << ")";
    return os;
}

template<typename T1, typename T2>
std::ostream &operator<<(std::ostream &os, std::map<T1, T2> &mp) {
    int len = mp.size();
    int cnt = 0;
    std::cout << "(";
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        std::cout << it->first << ": " << it->second;
        if (cnt != len - 1) std::cout << ", ";
        cnt++;
    }
    std::cout << ")";
    return os;
}

template<typename T1, typename T2>
std::ostream &operator<<(std::ostream &os, std::unordered_map<T1, T2> &mp) {
    int len = mp.size();
    int cnt = 0;
    std::cout << "(";
    for (auto p: mp) {
        std::cout << p.first << ": " << p.second;
        if (cnt != len - 1) std::cout << ", ";
        cnt++;
    }
    std::cout << ")";
    return os;
}

