//
// Created by youssoupha faye on 21/11/2025.
//

namespace solution1 {
    int clip(int x, int min, int max) {
        if (x < min) return min;
        if (x > max) return max;
        return x;
    }

    double clip(double x, double min, double max) {
        if (x < min) return min;
        if (x > max) return max;
        return x;
    }

    void clamp_inplace(int& x, int min, int max) {
        if (x < min) x = min;
        else if (x > max) x = max;
    }
}
namespace solution2 {

    int clip(int x, int min, int max) {
        return (x < min) ? min : (x > max ? max : x);
    }

    double clip(double x, double min, double max) {
        return (x < min) ? min : (x > max ? max : x);
    }

    void clamp_inplace(int& x, int min, int max) {
        x = (x < min) ? min : (x > max ? max : x);
    }

}