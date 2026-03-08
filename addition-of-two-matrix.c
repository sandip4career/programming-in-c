#include<stdio.h>

int main()
{
    int A[3][3],B[3][3],C[3][3],i,j;

    //Enter first matrix
    printf("Enter 9 number for first matrix:");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }


    //Enter second matrix
    printf("Enter 9 number for second matrix:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }


    printf("Additon of two matrix is:");
    printf("\n");
        //Addition of both
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
