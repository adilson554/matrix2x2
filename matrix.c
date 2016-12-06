/*
    Imprime uma matriz quadrada A de ordem 2,
    Calcula o determinante det(A);
    Imprime a inversa A^{-1}
    Imprime A*A^{-1}
*/

#include<stdio.h>

int main(){
    int i,j;
    float A[2][2], B[2][2], C[2][2];
    float det;

    A[0][0] = 11;
    A[0][1] = 3;
    A[1][0] = 5;
    A[1][1] = 7;

//imprime a matriz A
printf("++++++++++++++++++++++++++++++++++++++++++\n");
printf("A = \n");
    for(i=0;i<2;i=i+1){
        for(j=0;j<2;j=j+1){
            printf("%.2f\t ",A[i][j]);
            if(j==1){
                printf("\n");
            }
        }
    }
//determinante
printf("++++++++++++++++++++++++++++++++++++++++++\n");
printf(" \n");
det = A[0][0]*A[1][1] - A[0][1]*A[1][0];
printf("O determinante de A é: %f\n",det);

//inversa
printf("++++++++++++++++++++++++++++++++++++++++++\n");
printf("A^{-1} = \n");

B[0][0] = A[1][1]/det;
B[1][1] = A[0][0]/det;
B[0][1] = -A[0][1]/det;
B[1][0] = -A[1][0]/det;

//imprime a matriz B
    for(i=0;i<2;i=i+1){
        for(j=0;j<2;j=j+1){
            printf("%.7f\t ",B[i][j]);
            if(j==1){
                printf("\n");
            }
        }
    }

//A * B
printf("++++++++++++++++++++++++++++++++++++++++++\n");
printf("A*A^{-1} = \n");
C[0][0] = A[0][0]*B[0][0] + A[0][1]*B[1][0];
C[0][1] = A[0][0]*B[0][1] + A[0][1]*B[1][1];
C[1][0] = A[1][0]*B[0][0] + A[1][1]*B[1][0];
C[1][1] = A[1][0]*B[0][1] + A[1][1]*B[1][1];

//imprime a matriz C
    for(i=0;i<2;i=i+1){
        for(j=0;j<2;j=j+1){
            printf("%.2f\t ",C[i][j]);
            if(j==1){
                printf("\n");
            }
        }
    }

    return 0;
}
