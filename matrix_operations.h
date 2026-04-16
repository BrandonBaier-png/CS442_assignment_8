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

class matrix_operations {
    public:
    void inputMatrix(int **matrix, int dim);

    void outputMatrix(vector<vector<unsigned long long int>> matrix, int dim);

    int generateNum();

    void testGenNums(int numGen);
};


#endif //CS442_ASSIGNMENT_8_MATRIX_OPERATIONS_H