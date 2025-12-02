// #include <iostream>
//
// int f(int& x) {
//     x += 3;
//     return x;
// }
//
// int main() {
//     int a = 4;
//     {
//         int& b = a;
//         std::cout << f(b) << " ";
//         b++;
//     }
//     std::cout << a;
// }
//

//
// #include <iostream>
//
// int g(int a, int b = 2) {
//     return a * b;
// }
//
// int main() {
//     int x = 3;
//     std::cout << g(++x) + g(x, x++);
// }

// #include <iostream>
//
// int cube(const int& n) {
//     static int c = 0;
//     c += n * n * n;
//     return c;
// }
//
// int main() {
//     std::cout << cube(2) << " ";
//     int a = 3;
//     std::cout << cube(a) << " ";
//     std::cout << cube(1);
// }

// #include <iostream>
//
// int main() {
//     int t[3] = {1, 2, 3};
//     int& x = t[1];
//     x++;
//     int& y = x;
//     y = t[0] + t[2];
//     std::cout << t[0] << t[1] << t[2];
// }



// #include <iostream>
//
// void afficher(int a) { std::cout << "int"; }
// void afficher(double a) { std::cout << "double"; }
// void afficher(const std::string& a) { std::cout << "string"; }
//
// int main() {
//     afficher('A');
//     afficher(2.0f);
//     afficher("A");
// }


#include <iostream>

int& f(int& a) {
    a += 2;
    return a;
}

// int main() {
//     int x = 3;
//     int y = f(x);
//     f(y) = f(x);
//     std::cout << x << " " << y;
// }

//
// namespace math {
//     int carre(int x) { return x*x; }
//     int addition(int a, int b) {return a + b;}
//     int subtraction(int a, int b) {return a - b;}
//     int division(int a, int b) {
//         if (b ==0) return 0;
//         return a/b;
//     }
// }
// namespace autreMath {
//     int carre(int x = 2);
//     int carre(int x) { return x*x; }
//     int addition(int a, int b) {return a + b;}
//     int subtraction(int a, int b) {return a - b;}
//     int division(int a, int b) {
//         if (b ==0) return 0;
//         return a/b;
//     }
// }
// void ajouterDeux( int a[],int taille) {
//     for (int i = 0; i < taille; i++) {
//         a[i] = a[i] + 2;
//     }
// }
// #include <iostream>
// using namespace std;
// using namespace math;
// using namespace autreMath;
// int main() {
//     cout << autreMath::carre();
// }

