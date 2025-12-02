#include <iostream>

int main() {
    char s[6] = { 'H', 'e', 'l', 'l', 'o', '\0'};

    char suite[6] = { ' ', '+', '+', '+', '+', '\0' };
    std::string nouveauText = "Hello World";

    std::cout << "Affichage avec cout << s :\n";
    std::cout << "[" << s << "]" << std::endl;

    std::cout << "\nAffichage avec cout.write(s, 5) :\n";
    std::cout << "[";
    std::cout.write(s, 5); // on affiche exactement 5 caractères
    std::cout << "]" << std::endl;

    return 0;
}
