//
// Created by youssoupha faye on 21/11/2025.
//

#include <iostream>
#include <ostream>
const int MAXC = 50;

bool saddle_point(const int M[][MAXC], int rows, int cols, int& r, int& c) {
    for (int i = 0; i < rows; ++i) {

        // Trouver le minimum de la ligne i
        int minVal = M[i][0];
        int minCol = 0;

        for (int j = 1; j < cols; ++j) {
            if (M[i][j] < minVal) {
                minVal = M[i][j];
                minCol = j;
            }
        }

        bool isMaxCol = true;
        for (int k = 0; k < rows; ++k) {
            if (M[k][minCol] > minVal) {
                isMaxCol = false;
                break;
            }
        }

        if (isMaxCol) {
            r = i;
            c = minCol;
            return true;
        }
    }
    return false;
}
void manipuler(int &y,int z ) {
    z+=2;
    y*=3;
}
int  main() {
    int a = 2;
    int *b = &a;
    int &c = a;
    std::cout << b << std::endl;
    std::cout << c << std::endl;

}