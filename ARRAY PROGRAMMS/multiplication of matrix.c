#include<stdio.h>

int main()
{
    int mat1[4][4], mat2[4][4], mat3[4][4], sum=0, i, j, k;
    printf("Enter first 4*4 matrix element: ");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
            scanf("%d", &mat1[i][j]);
    }
    printf("Enter second 4*4 matrix element: ");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
            scanf("%d", &mat2[i][j]);
    }
    printf("\nMultiplying two matrices...");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            sum=0;
            for(k=0; k<4; k++)
                sum = sum + mat1[i][k] * mat2[k][j];
            mat3[i][j] = sum;
        }
    }
}
