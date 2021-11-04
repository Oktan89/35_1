#include <iostream>
#include <initializer_list>

int main()
{
    auto test = {1, 2, 3, 4, 5};

    for(auto &in : test)
        std::cout << in << " ";
    std::cout << std::endl;
}