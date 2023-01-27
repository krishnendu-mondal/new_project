
// 1
// 2 3
// 4 5 6
// 7 8 9 10

/* #include<stdio.h>

void main(){

    int num,k=1;
    scanf("%d",&num);
    for(int i=1; i<=num; i++){
        for(int j=1; j<=i; j++){
            printf("%d ",k++);
        }
        printf("\n");
    }
} */

//****************************************************************************

/*      1
       1 1
      1 2 1
     1 3 3 1
    1 4 6 4 1 */

#include <stdio.h>

void main()
{

    int num;
    scanf("%d", &num);

    int matrix[num][num];

    for (int i = 0; i < num; i++)
    {
        for (int k=num-i-1; k>=0; k--){
            printf(" ");
            
        }
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                matrix[i][j] = 1;
                printf("%d ", matrix[i][j]);
            }
            else
            {
                matrix[i][j] = matrix[i - 1][j] + matrix[i - 1][j - 1];
                printf("%d ", matrix[i][j]);
            }
        }
        
        printf("\n");
    }
}