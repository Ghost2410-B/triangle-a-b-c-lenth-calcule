#include <stdio.h>
int main()
{
    int mat[100][100];//the result
    int mat1[100][100];//the first matrix
    int mat2[100][100];//the second matrix
    int size;//the size of the matrix (the lines and coloms)
    printf("enter the size of your matrix: ");
    scanf("%d",&size);
    for (int i=0;i<size;i++){//read the first matrix
        for (int j=0;j<size;j++){
            printf("matrix_1[%d][%d]=",i,j);
            scanf("%d",&mat1[i][j]);
        }

    }
    printf("=====================\n");
    for (int i=0;i<size;i++){//read the second matrix
        for (int j=0;j<size;j++){
            printf("matrix_2[%d][%d]=",i,j);
            scanf("%d",&mat2[i][j]);
        }

    }
    for (int i=0;i<size;i++){//https://www.mathsisfun.com/algebra/matrix-multiplying.html
        for (int j=0;j<size;j++){
            int t=0;
            while(t<size){
            mat[i][j]+=(mat1[i][t]*mat2[t][j]);
            t++;
            }
        }

    }
    printf("\n");
    printf("\n");
    printf("\n");
    for (int i=0;i<size;i++){ //print the finale matrix
        for (int j=0;j<size;j++){
            printf("\t|%d",mat[i][j]);
            }
        printf("\n");
        }
    return 0;
}




//:-)
//^_^
//Ghost2410
