#include<stdio.h>
#define ROW 3
#define COL 3
void inputmat(int mat[][COL] )
{
    int row,col;
    for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            scanf("%d",(*(mat+row)+col));
        }
    }

}
void printmat(int mat[][COL])
{
   int row,col;

    for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            printf("%d   ",*(*(mat+row)+col));
        }
        printf("\n");
    }
}
void matmul(int mat1[][COL],int mat2[][COL],int res[][COL])
{
  int row,col;
    int mat[3][3] ,sum,i;
    for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            sum=0;
            for(i=0;i<3;i++)
            {
           sum +=  *(*(mat1+row)+col) * (*(*(mat2+row)+col));
        }
        *(*(res+row)+col)=sum;
        }

    }

}
void main()
{
    int mat1[ROW][COL],mat2[ROW][COL],res[ROW][COL];
    printf("enter matrix 1:\n");
    inputmat(mat1);
    printmat(mat1);
    printf("enter matrix 2:\n");
    inputmat(mat2);
    printmat(mat2);
    matmul(mat1,mat2,res);
    printf("Resultant matrix is:\n");
    printmat(res);
}
