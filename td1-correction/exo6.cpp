//
// Created by youssoupha faye on 21/11/2025.
//

/**
 *Vérifier si une chaîne est un palindrome en ignorant espaces, ponctuation et casse (ASCII).
 */
#include <cctype>
#include <iostream>
#include <ostream>
#include <string>

namespace solution1 {
    bool is_palindrome(const std::string& s) {
        int left = 0, right = (int)s.size() - 1;

        while (left < right) {
            while (left < right && !std::isalnum(static_cast<unsigned char>(s[left]))) left++;
            while (left < right && !std::isalnum(static_cast<unsigned char>(s[right]))) right--;

            if (std::tolower((unsigned char)s[left]) != std::tolower((unsigned char)s[right]))
                return false;

            left++;
            right--;
        }
        return true;
    }
}
























namespace solution2 {
    bool is_palindrome(const std::string& s) {
        auto left = s.begin();
        auto right = s.end();
        if (!s.empty()) --right;
        std::cout << *left << *right << std::endl;

        while (left < right) {

            while (left < right && !std::isalnum((unsigned char)*left)) left++;
            while (left < right && !std::isalnum((unsigned char)*right)) right--;

            if (std::tolower((unsigned char)*left) != std::tolower((unsigned char)*right))
                return false;

            left++;
            right--;
        }
        return true;
    }
}
int main() {
    const std::string s = "M a t a,m";
    const std::string phrase =  "Engage le jeu que je le gagne ";
    std::cout << solution2::is_palindrome(s);
    std::cout << solution2::is_palindrome(phrase);

}