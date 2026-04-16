//
// Created by 12626 on 4/13/2026.
//

#ifndef CS442_ASSIGNMENT_8_MATRIX_OPERATIONS_H
#define CS442_ASSIGNMENT_8_MATRIX_OPERATIONS_H

#include <vector>
/* C++ functions for running matrix multiplication
 *
 */

using namespace std;
typedef vector<vector<unsigned long long int>> twodVec;

class matrix_operations {
    public:
    void inputMatrix(int **matrix, int dim);

    void outputMatrix(twodVec matrix, int dim);

    twodVec sequential_Matrix_Multiplication(
        twodVec matrixA,
        twodVec matrixB,
        twodVec matrixC, int dim);

    int generateNum();

    void testGenNums(int numGen);
};


#endif //CS442_ASSIGNMENT_8_MATRIX_OPERATIONS_H