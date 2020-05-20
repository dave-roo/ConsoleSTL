#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;

    //---------------------------------
    // General Operations
    //---------------------------------

    // Access head, index, tail
    int head = v.front();       // head
    int value = v.at(1);    // index
    int tail = v.back();        // tail

    // Size
    unsigned int size = v.size();

    // Iterate
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        std::cout << *it << std::endl;
    }

    // Remove head, index, tail
    v.erase(v.begin());             // head
    v.erase(v.begin() + 1);         // index
    v.pop_back();                   // tail

    // Clear
    v.clear();
}
