#include "permutation.h"

#include <random>
#include <algorithm>
#include <iterator>
#include <iostream>


//rotate
//shuffle
//next_permutation
//prev_permutation
//reverse

permutation::permutation()
{

}

permutation::~permutation()
{

}

void permutation::runPermutation()
{
    std::vector<int> v{ 2, 4, 2, 0, 5, 10, 7, 3, 7, 1 };

    std::cout << "before sort:      ";
    for (int n : v)
        std::cout << n << ' ';
    std::cout << '\n';

    // insertion sort
    for (auto i = v.begin(); i != v.end(); ++i) {
        std::rotate(std::upper_bound(v.begin(), i, *i), i, i + 1);
    }

    std::cout << "after sort:       ";
    for (int n : v)
        std::cout << n << ' ';
    std::cout << '\n';

    // simple rotation to the left
    std::rotate(v.begin(), v.begin() + 1, v.end());

    std::cout << "simple rotate left  : ";
    for (int n : v)
        std::cout << n << ' ';
    std::cout << '\n';

    // simple rotation to the right
    std::rotate(v.rbegin(), v.rbegin() + 1, v.rend());

    std::cout << "simple rotate right : ";
    for (int n : v)
        std::cout << n << ' ';
    std::cout << '\n';

    //shuffle
    std::random_device rd;
    std::mt19937 g(rd()); //Mersenne Twister
    std::shuffle(v.begin(), v.end(), g);
    std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << "\n";

    //next_permutation
    std::string s = "abc";
    std::sort(s.begin(), s.end());
    do {
        std::cout << s << ' ';
    } while (std::next_permutation(s.begin(), s.end()));
    std::cout << '\n';

    //prev_permutation
    std::string k = "abc";
    std::sort(k.begin(), k.end(), std::greater<char>());
    do {
        std::cout << k << ' ';
    } while (std::prev_permutation(k.begin(), k.end()));
    std::cout << '\n';



}
