//
// Created by Youssoupha FAYE on 02/12/2025.
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
   const auto notes = std::make_unique<int>(0);
   std::cout << notes.get() << std::endl;
}
