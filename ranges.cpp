//
// Created by svale on 7/16/2021.
//


#include <iostream>
#include <algorithm>

struct NullTerm
{
    bool operator == (auto pos) const
    {
        return *pos == '\0';
    }
};

int main()
{
    const char* rawString = "hello world\n";
    // std::vector<int> v{25, 42, 0, 122, 5, 7};
    int v[] = {8, 6, 42, 1, 77};

    std::ranges::subrange vs{rawString, NullTerm{}};

    std::ranges::sort(v);

    for (int i : v)
        std::cout << i << ", ";
    std::cout << '\n';

    for (char c : vs)
        std::cout << c;
    std::cout << '\n';
}
