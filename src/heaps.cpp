#pragma once
#include <iostream>     // std::cout
#include <algorithm>    // std::make_heap, std::pop_heap, std::push_heap, std::sort_heap
#include <vector>       // std::vector

#include "heaps.h"


heaps::heaps()
{

}

heaps::~heaps()
{

}


void heapsSTLrun()
{
    int myints[] = { 10,20,30,5,15 };
    std::vector<int> v(myints, myints + 5);

    std::make_heap(v.begin(), v.end());

    for (const auto& j : v) {
        std::cout << j << " ";
    }
    std::cout << '\n';


    std::cout << "initial max heap   : " << v.front() << '\n';

    std::pop_heap(v.begin(), v.end()); 
    v.pop_back();
    std::cout << "max heap after pop : " << v.front() << '\n';

    v.push_back(99); 
    std::push_heap(v.begin(), v.end());
    std::cout << "max heap after push: " << v.front() << '\n';

    std::sort_heap(v.begin(), v.end());

    std::cout << "final sorted range :";

    for (const auto& j : v) {
        std::cout << j << " ";
    }

    std::cout << '\n';
}


void heaps::runHeaps()
{
    heapsSTLrun();
}
