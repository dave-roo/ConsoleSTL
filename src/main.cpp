#include "main.h"
#include "heaps.h"
#include "sorting.h"
#include "partitioning.h"
#include "permutation.h"
#include <string>
#include <memory>

int main()
{
    std::unique_ptr<heaps> heapsObj(new heaps());
    heapsObj->runHeaps();

    std::unique_ptr<sorting> sortObj(new sorting());
    sortObj->runSorting();

    std::unique_ptr<partitioning> partitionObj(new partitioning());
    partitionObj->runPartitioning();

    std::unique_ptr<permutation> permutationObj(new permutation());
    permutationObj->runPermutation();
}
