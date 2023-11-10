#include <iostream>

int main (int argc, char *argv[]) {
    
    int length;

    std::cout << "Insert the length of the array: ";
    std::cin >> length;
    int *arr = new int [length];

    for (int *p = arr; p < arr + length; p++) {
        std::cout << "arr [" << p - arr << "] = ";
        std::cin >> *p;
    }
    
    for (int *p = arr; p < arr + length; p++) {
        if (p - arr == 0) {
            std::cout << "arr = [" << *p << ", ";
            continue;
        }
        if (p - arr == length - 1) {
            std::cout << *p << "]." << std::endl;
            break;
        }
        std::cout << *p << ", ";
    }

    std::cout << "Reversing the array!" << std::endl;
    for (int *pi = arr, *pj = arr + length - 1; pi < pj; pi++, pj--) {
        *pi += *pj;
        *pj = *pi - *pj;
        *pi -= *pj;
    }
    
    for (int *p = arr; p < arr + length; p++) {
        if (p - arr == 0) {
            std::cout << "arr = [" << *p << ", ";
            continue;
        }
        if (p - arr == length - 1) {
            std::cout << *p << "]." << std::endl;
            break;
        }
        std::cout << *p << ", ";
    }

    delete [] arr;

    return 0;
}
