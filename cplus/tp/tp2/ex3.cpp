#include <iostream>

int main (int argc, char *argv[]) {
    
    int N, M;

    std::cout << "Insert N followed by M: ";
    std::cin >> N >> M;
    int **A = new int *[N];
    for (int i = 0; i < N; i++) {
        A[i] = new int [M];
        for (int j = 0; j < M; j++) {
            std::cout << "Insert A[" << i << "][" << j << "] = ";
            std::cin >> A[i][j];
        }
    }

    for (int **pi = A; pi < A + N; pi++) {
        for (int *pj = *pi; pj < *pi + M; pj++) {
            std::cout << *pj << "\t";
        }
        std::cout << std::endl;
    }
    std::cout << "-----------------------" << std::endl;
    int *p = *A;
    int counter = 0;
    while (true) {
        std::cout << *p << "\t";
        p++;
        if (p - *(A + counter) == M) {
        counter++;
        p = *(A + counter);
        std::cout << std::endl;
        }
        if (N == counter && M == p - *(A + counter)) {
            break;
        }
    }

    for (int i = 0; i < N; i++) {
        delete [] A[i];
    }
    delete []A;

    return 0;
}
