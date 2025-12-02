#include <iostream>
int* recherche(int i[],int n,int cible) {
        for (int j=0;j<n;j++) {
                if (cible==i[j]) {
                        return &i[j];
                }
        }

        return -1;
}
int main() {
        int t[] = {1,4,6,8};
        int* res = recherche(t,4,6);
        *res = 8;
}
