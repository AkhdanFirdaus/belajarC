#include <stdio.h>

int main()
{
    int matrix[2][3] = {{1, 2, 3}, {7, 8, 9}};
    printf("Isi array matrix: \n");
    printf("%d %d %d \n", matrix[0][0], matrix[0][1], matrix[0][2]);
    printf("%d %d %d \n", matrix[1][0], matrix[1][1], matrix[1][2]);
    return 0;
}
