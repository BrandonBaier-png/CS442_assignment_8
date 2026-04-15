//
// Created by 12626 on 4/13/2026.
//
#include <random>
#include "matrix_operations.h"

#include <ctime>
#include <bits/locale_classes.h>


// Creates an integer number for filling the starter matrixes
int matrix_operations::generateNum() {
    int randNum = 1 + rand() % 10;
    return randNum;
}

// fill the called matrix with numbers randomly generated based on the dim length
void matrix_operations::inputMatrix(int** matrix, int dim) {
    srand(time(nullptr));
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
           matrix[i][j] = generateNum();
        }
    }
}

// this currently generates whatever it wants, doesn't fully work
