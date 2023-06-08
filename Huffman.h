//
// Created by User on 06.06.2023.
//

#ifndef VECTORS_HUFFMAN_H
#define VECTORS_HUFFMAN_H

#include <algorithm>
#include <cassert>
#include <cstddef>
#include <iostream>
#include <string>
#include <tuple>
#include <unordered_map>
#include <vector>

class Huffman {

    struct CharFrequency
    {
        char c;
        int frequency;

        bool operator < (const CharFrequency &other) const
        {
            return std::tie(frequency, c) > std::tie(other.frequency, other.c);
        }
    };

    static std::unordered_map<char, std::string> shannon_fano_encode(const std::vector<CharFrequency> &frequencies, int total_frequency);

public:
    static std::unordered_map<char, std::string> encode(const std::string &text);

    static std::string decode(const std::string &text, std::unordered_map<char, std::string>);

};


#endif //VECTORS_HUFFMAN_H
