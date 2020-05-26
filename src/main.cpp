#include "main.h"
#include "heaps.h"
#include "sorting.h"
#include "partitioning.h"
#include "permutation.h"
#include "box.h"
#include <string>
#include <memory>

int main()
{
    Box b; // "default"
    Box b1(b); // "copy"
    Box b2(get_Box()); // "move"
    std::cout << "b2 contents: " << std::endl << std::endl;
    b2.Print_Contents(); // Prove that we have all the values
    std::cout << std::endl << "----------------------------------" << std::endl << std::endl;
    

    std::unique_ptr<heaps> heapsObj(new heaps());
    heapsObj->runHeaps();

    std::unique_ptr<sorting> sortObj(new sorting());
    sortObj->runSorting();

    std::unique_ptr<partitioning> partitionObj(new partitioning());
    partitionObj->runPartitioning();

    std::unique_ptr<permutation> permutationObj(new permutation());
    permutationObj->runPermutation();
}
