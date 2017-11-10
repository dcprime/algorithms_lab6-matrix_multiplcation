#pragma once
/*************************** Matrix.h ***************************/

/************************** prototypes **************************/

// A is an m x n matrix, x is a n x 1 vector, y is an m x 1 vector (resulting product of Ax)
void MultiplyAx(float *A, int n, int m, float *x, float *y);