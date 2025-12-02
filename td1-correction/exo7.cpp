//
// Created by youssoupha faye on 21/11/2025.
//
#include <iostream>

namespace solution1 {
    std::string rle_encode(const std::string &s) {
        if (s.empty()) return "";

        std::string out;
        char current = s[0];
        int count = 1;

        for (size_t i = 1; i < s.size(); ++i) {
            if (s[i] == current) {
                count++;
            } else {
                out += current;
                out += std::to_string(count);
                current = s[i];
                count = 1;
            }
        }


        out += current;
        out += std::to_string(count);

        return out;
    }
    std::string rle_decode(const std::string &s) {
        if (s.empty()) return "";
    }
}

namespace solution2 {
    std::string rle_encode(const std::string &s) {
        if (s.empty()) return "";

        std::string out;
        size_t i = 0;
        while (i < s.size()) {
            size_t j = i + 1;
            while (j < s.size() && s[j] == s[i])
                j++;

            out += s[i];
            out += std::to_string(j - i);

            i = j; // sauter au prochain bloc
        }
        return out;
    }
}
