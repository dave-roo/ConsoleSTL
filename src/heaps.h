#include <iostream>     // std::cout
#include <algorithm>    // std::make_heap, std::pop_heap, std::push_heap, std::sort_heap
#include <vector>       // std::vector

//ctor
class heapsObject
{
	public: heapsObject();
	virtual ~heapsObject(); //A virtual function is a member function which is declared within a base class and is re-defined(Overriden) by a derived class.
	void runHeaps();
};