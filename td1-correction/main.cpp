//
// Created by youssoupha faye on 25/11/2025.
//*
#include <iostream>

int* find(int* t, int n, int cible){
   for(int i=0;i<n;++i) if (t[i]==cible) return &t[i];
   return nullptr;
}
int main() {
   int t[5] = {5,6,79,12,3};

   int *end = t+5;
   for (int *p = t; p < end; ++p ) {
      std::cout << *p << std::endl;
   }


}