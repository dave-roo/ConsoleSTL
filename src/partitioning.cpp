//partitioning
//partitions into halves
//partition point

#include <algorithm>
#include <functional>
#include <array>
#include <iostream>
#include <vector>       // std::vector

#include "partitioning.h"
#include <forward_list>

partitioning::partitioning()
{
}

partitioning::~partitioning()
{
}

void partitioningSTLrun() {

    std::vector<int> v = { 0,1,2,3,4,5,6,7,8,9 };
    std::cout << "Original vector:\n    ";
    for (int elem : v) std::cout << elem << ' ';

    auto it = std::partition(v.begin(), v.end(), [](int i) {return i % 2 == 0; });

    std::cout << "\nPartitioned vector:\n    ";
    std::copy(std::begin(v), it, std::ostream_iterator<int>(std::cout, " "));
    std::cout << " * ";
    std::copy(it, std::end(v), std::ostream_iterator<int>(std::cout, " "));



}

void partitioning::runPartitioning()
{
	partitioningSTLrun();
}

