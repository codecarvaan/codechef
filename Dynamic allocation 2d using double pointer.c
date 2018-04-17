#include <stdio.h>
#include <stdlib.h>

int main()
{
    int col,row;
    printf("Enter the size of rows and columns");
    scanf("%d %d", &row, &col);

 //allocating size to the array
    int **arr2d = (int **)malloc(row * sizeof(int *));
    for (int i=0; i<row; i++)
         arr2d[i] = (int *)malloc(col * sizeof(int));
//storing number into 2d array
int count=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {

            arr2d[i][j]=count++;
        }
    }
//printing value of 2d array
for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {

           printf("%d",arr2d[i][j]) ;
        }
    }
    return 0;
}
