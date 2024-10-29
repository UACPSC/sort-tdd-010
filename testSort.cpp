/*
    testSort.cpp

    Test program for sort function
*/

#include "sort.hpp"
#include <cassert>

// Make sure assert() is not removed
#undef NDEBUG

int main() {

    {
        std::vector<int> v;
        assert(v.empty());
        assert(v.size() == 0);

        sort(v);

        assert(v.empty());
        assert(v.size() == 0);
    }

    {
        std::vector<int> v;
        v.push_back(1);
        assert(v[0] == 1);
        assert(!v.empty());
        assert(v.size() == 1);

        sort(v);

        assert(v[0] == 1);
        assert(!v.empty());
        assert(v.size() == 1);
    }

    return 0;
}
