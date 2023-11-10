#include <iostream>

int main (int argc, char *argv[]) {
    
    int size, x;

    std::cout << "size = ";
    std::cin >> size;
    int *arr = new int [size];
    for (int *pi = arr; pi < arr + size; pi++) {
        std::cout << "arr [" << pi - arr << "] = ";
        std::cin >> *pi;
    }

    std::cout << "initial array : ";
    for (int *pi = arr; pi < arr + size; pi++) {
        std::cout << *pi << " ";
    }
    std::cout << std::endl;
        
    std::cout << "x = ";
    std::cin >> x;

    int *pj = arr;
    for (int *pi = arr; pi < arr + size; pi++) {
        if (*pi != x) {
            *pj = *pi;
            pj++;
        }
    } 
    size = pj - arr;

    std::cout << "removing x (" << x << ") : ";
    for (int *pj = arr; pj < arr + size; pj++) {
        std::cout << *pj << " ";
    }
    std::cout << std::endl;

    return 0;
}
