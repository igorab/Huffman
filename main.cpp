#include <iostream>
#include <vector>
#include "Huffman.h"


int version6()
{
    std::vector<int> vec { 6, 3, 8, -9, 1, -2, 8 };
    std::string delim = ", ";

    return 0;
}


int main() {

    std::string text;
    std::cin >> text;

    auto huffman_encoding = Huffman::encode(text);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
