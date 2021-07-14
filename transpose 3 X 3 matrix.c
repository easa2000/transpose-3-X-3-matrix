// write a program to transpose a 3 X 3 matrix
#include<stdio.h>
void main()
{
    int i,j,mat[3][3],transpose[3][3];

    printf("\n Enter the elements of the matrix: ");
    printf("\n **************************************\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
           scanf("%d",&mat[i][j]);
    }
    printf("\n The elements of the matrix are");
    printf("\n **************************************\n");

    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++)
          printf("\t %d",mat[i][j]);
    }
    printf("\n The elements of the transpose matrix are\n");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("\t %d",mat[j][i]);
        }
    }
}
