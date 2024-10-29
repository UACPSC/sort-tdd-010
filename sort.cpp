/*
    sort.cpp

    Sorting functions
*/

#include "sort.hpp"

// sort the entire vector in place in ascending order
void sort(std::vector<int>& v) {

    if (v.size() <= 1)
        return;

    if (v[0] > v[1]) {
        auto t = v[0];
        v[0] = v[1];
        v[1] = t;
    }
}
