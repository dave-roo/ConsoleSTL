//Sorting
//sort
//partial sort
//nth_element
//sort_heap
//inplace_merge (incremental stages of a merge sort)

#include <algorithm>
#include <functional>
#include <array>
#include <iostream>

#include "sorting.h"

sorting::sorting()
{
}

sorting::~sorting()
{
}

void sortingSTLrun() 
{
    std::array<int, 10> s = { 5, 7, 4, 2, 8, 6, 1, 9, 0, 3 };

    std::partial_sort(s.begin(), s.begin() + 3, s.end());
    for (int a : s) {
        std::cout << a << " ";
    }

    std::nth_element(s.begin(), s.begin() + s.size() / 2, s.end());
    std::cout << "The median is " << s[s.size() / 2] << '\n';



    // sort using the default operator<
    std::sort(s.begin(), s.end());
    for (auto a : s) {
        std::cout << a << " ";
    }
    std::cout << '\n';

    // sort using a standard library compare function object
    std::sort(s.begin(), s.end(), std::greater<int>());
    for (auto a : s) {
        std::cout << a << " ";
    }
    std::cout << '\n';

    // sort using a custom function object
    struct {
        bool operator()(int a, int b) const
        {
            return a < b;
        }
    } customLess;
    std::sort(s.begin(), s.end(), customLess);
    for (auto a : s) {
        std::cout << a << " ";
    }
    std::cout << '\n';

    // sort using a lambda expression 
    std::sort(s.begin(), s.end(), [](int a, int b) {
        return a > b;
        });
    for (auto a : s) {
        std::cout << a << " ";
    }
    std::cout << '\n';
}

void sorting::runSorting()
{
    sortingSTLrun();
}
