#include "main.h"
#include "heaps.h"
#include <string>

int main()
{
    std::unique_ptr<heapsObject> heapsObj(new heapsObject());

    heapsObj->runHeaps();

}
