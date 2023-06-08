#include "Huffman.h"

std::unordered_map<char, std::string>  Huffman::shannon_fano_encode(const std::vector<CharFrequency> &frequencies, int total_frequency) {
    size_t size = frequencies.size();
    std::unordered_map<char, std::string> result;
    if (size <= 1) {
        for (auto &frequency:frequencies) {
            result[frequency.c] = "";
        }
        return std::move(result);
    }

    size_t split_pos;
    int first_part_frequency = 0;
    for (split_pos = 0; split_pos < size; split_pos++) {
        int current_frequency = frequencies[split_pos].frequency;
        //

        first_part_frequency += current_frequency;
    }



    return std::move(result);
}

std::unordered_map<char, std::string> Huffman::encode(const std::string &text) {
    std::unordered_map<char, int> char_frequencies;
    for (auto c:text) {
        char_frequencies[c]++;
    }

    std::vector<CharFrequency> frequencies;
    for (auto char_frequency:char_frequencies) {
        frequencies.push_back({char_frequency.first, char_frequency.second });
    }
    std::sort(frequencies.begin() , frequencies.end());

    if (frequencies.size() == 1)
    {
        std::unordered_map<char, std::string> result;
        result[frequencies[0].c] = "0";
        return result;
    }

    return shannon_fano_encode(std::move(frequencies), static_cast<int>(text.size()));
}
