#include <iostream>
#include <ctime>

void generateMatrix(int matrix[][5], int n, int i = 0, int j = 0) {
    if (i < n) {
        if (j < n) {
            matrix[i][j] = rand() % 100; 
            generateMatrix(matrix, n, i, j + 1);
        }
        else {
            generateMatrix(matrix, n, i + 1, 0);
        }
    }
}

void printMatrix(int matrix[][5], int n, int i = 0, int j = 0) {
    if (i < n) {
        if (j < n) {
            std::cout << matrix[i][j] << "\t";
            printMatrix(matrix, n, i, j + 1);
        }
        else {
            std::cout << "\n";
            printMatrix(matrix, n, i + 1, 0);
        }
    }
}

int findMaxInMainDiagonal(int matrix[][5], int n, int i = 0, int maxElem = -1) {
    if (i < n) {
        if (matrix[i][i] > maxElem) {
            maxElem = matrix[i][i];
        }
        return findMaxInMainDiagonal(matrix, n, i + 1, maxElem);
    }
    else {
        return maxElem;
    }
}

int main() {
    srand(time(0)); 
    int n = 5; 
    int matrix[5][5];
    generateMatrix(matrix, n);
    std::cout << "matrix:\n";
    printMatrix(matrix, n);
    int maxElem = findMaxInMainDiagonal(matrix, n);
    std::cout << "max element diagonaly: " << maxElem << "\n";
    return 0;
}
