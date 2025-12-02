//
// Created by youssoupha faye on 02/12/2025.
//


#include <iostream>
int somme(const int* t, int n){
   if (!t) return 0;
   int sum = 0;
   const int *end = t + n;
   for (auto i = t; i != end;i++) {
      sum += (*t);
   }
   return sum;
}
int main() {
   std:std::unique_ptr<int> notes = std::make_unique<int>(0);
   std::cout << *notes << std::endl;

}
