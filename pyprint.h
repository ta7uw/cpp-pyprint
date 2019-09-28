#pragma once

#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<iostream>


template<typename T>
void print(const std::vector<T> &v, bool endLine = true) {
    long long len = v.size();
    if (len == 0) {
        std::cout << "[ ]" << std::endl;
        return;
    }
    std::cout << "[";
    for (long long i = 0; i < len; ++i) {
        std::cout << v[i];
        if (i != len - 1) {
            std::cout << ", ";
        } else {
            std::cout << "]";
            if (endLine) std::cout << std::endl;
        }
    }
}

template<typename T1, typename T2>
void print(const std::pair<T1, T2> &p, bool endLine = true) {
    std::cout << "(" << p.first << ", " << p.second << ")";
    if (endLine) std::cout << std::endl;
}

template<typename T>
void print(const std::vector<std::vector<T>> &grid) {
    long long len = grid.size();
    std::cout << "[";
    for (long long i = 0; i < len; ++i) {
        print(grid[i], false);
        if (i != len - 1) std::cout << "," << std::endl;
    }
    std::cout << "]" << std::endl;
}

template<typename T1, typename T2>
void print(std::vector<std::pair<T1, T2>> &pairVec) {
    long long len = pairVec.size();
    std::cout << "[";
    for (long long i = 0; i < len; ++i) {
        print(pairVec[i], false);
        if (i != len - 1) std::cout << "," << std::endl;
    }
    std::cout << "]" << std::endl;
}

template<typename T>
void print(std::set<T> &s) {
    long long len = s.size();
    long long cnt = 0;
    std::cout << "(";
    for (auto it : s) {
        std::cout << it;
        if (cnt != len - 1) std::cout << ", ";
        cnt++;
    }
    std::cout << ")" << std::endl;
}

template<typename T1, typename T2>
void print(std::map<T1, T2> &dict) {
    long long len = dict.size();
    long long cnt = 0;
    std::cout << "(";
    for (auto it = dict.begin(); it != dict.end(); ++it) {
        std::cout << it->first << ": " << it->second;
        if (cnt != len - 1) std::cout << ", ";
        cnt++;
    }
    std::cout << ")" << std::endl;
}

template<typename T1, typename T2>
void print(std::unordered_map<T1, T2> &dict) {
    long long len = dict.size();
    long long cnt = 0;
    std::cout << "(";
    for (auto p: dict) {
        std::cout << p.first << ": " << p.second;
        if (cnt != len - 1) std::cout << ", ";
        cnt++;
    }
    std::cout << ")" << std::endl;
}

template<typename T1, typename T2>
void print(std::vector<std::unordered_map<T1, T2>> &graph) {
    for (int i = 0; i < graph.size(); ++i) {
        for (int j = 0; j < graph[i].size(); ++j) {
            std::cout << i << " -> " << j << ": " << graph[i][j] << std::endl;
        }
    }
}

void print(const int t, bool endLine = true) {
    std::cout << t;
    std::cout << (endLine ? "\n" : " ");
}

void print(const long t, bool endLine = true) {
    std::cout << t;
    std::cout << (endLine ? "\n" : " ");
}

void print(const long long t, bool endLine = true) {
    std::cout << t;
    std::cout << (endLine ? "\n" : " ");
}

void print(const double t, bool endLine = true) {
    std::cout << t;
    std::cout << (endLine ? "\n" : " ");
}

void print(const float t, bool endLine = true) {
    std::cout << t;
    std::cout << (endLine ? "\n" : " ");
}

void print(const std::string &t, bool endLine = true) {
    std::cout << t;
    std::cout << (endLine ? "\n" : " ");
}

void print(const bool t, bool endLine = true) {
    std::cout << (t ? "true" : "false");
    std::cout << (endLine ? "\n" : " ");
}

void print(const char t, bool endLine = true) {
    std::cout << t;
    std::cout << (endLine ? "\n" : " ");
}

void print(const char t[], bool endLine = true) {
    std::cout << t;
    std::cout << (endLine ? "\n" : " ");
}

void print(const int t1, const int t2) {
    print(t1, false);
    print(t2, false);
    std::cout << std::endl;
}

void print(const int t1, const int t2, const int t3) {
    print(t1, false);
    print(t2, false);
    print(t3, false);
    std::cout << std::endl;
}

void print(const int t1, const int t2, const int t3, const int t4) {
    print(t1, false);
    print(t2, false);
    print(t3, false);
    print(t4, false);
    std::cout << std::endl;
}

void print(const long long t1, const long long t2) {
    print(t1, false);
    print(t2, false);
    std::cout << std::endl;
}

void print(const long long t1, const long long t2, const long long t3) {
    print(t1, false);
    print(t2, false);
    print(t3, false);
    std::cout << std::endl;
}

void print(const long long t1, const long long t2, const long long t3, const long long t4) {
    print(t1, false);
    print(t2, false);
    print(t3, false);
    print(t4, false);
    std::cout << std::endl;
}

void print(const double t1, const double t2) {
    print(t1, false);
    print(t2, false);
    std::cout << std::endl;
}

void print(const double t1, const double t2, const double t3) {
    print(t1, false);
    print(t2, false);
    print(t3, false);
    std::cout << std::endl;
}

void print(const double t1, const double t2, const double t3, const double t4) {
    print(t1, false);
    print(t2, false);
    print(t3, false);
    print(t4, false);
    std::cout << std::endl;
}

void print(const float t1, const float t2) {
    print(t1, false);
    print(t2, false);
    std::cout << std::endl;
}

void print(const float t1, const float t2, const float t3) {
    print(t1, false);
    print(t2, false);
    print(t3, false);
    std::cout << std::endl;
}

void print(const float t1, const float t2, const float t3, const float t4) {
    print(t1, false);
    print(t2, false);
    print(t3, false);
    print(t4, false);
    std::cout << std::endl;
}

void print(const std::string &t1, const std::string &t2) {
    print(t1, false);
    print(t2, false);
    std::cout << std::endl;
}

void print(const std::string &t1, const std::string &t2, const std::string &t3) {
    print(t1, false);
    print(t2, false);
    print(t3, false);
    std::cout << std::endl;
}

void print(const std::string &t1, const std::string &t2, const std::string &t3, const std::string &t4) {
    print(t1, false);
    print(t2, false);
    print(t3, false);
    print(t4, false);
    std::cout << std::endl;
}
