#include <iostream>
#include <cmath>
#include <typeinfo>

#define _USE_MATH_DEFINES

#ifdef _DOUBLE
    #define TYPE double
#else
    #define TYPE float
#endif


int main() {
    TYPE res = 0;
    TYPE step = M_PI * 2 / 10000000;
    TYPE *arr = new TYPE[10000000];

    for (size_t i = 0; i < 10000000; i++)
    {
        res += sin(step * i);
        arr[i] = res;
    }
    delete[] arr;
    std::cout << res << std::endl;
}
