/*
Write a program that reads a 5 x 5 array of integers and then prints the
row sums and the
column sums:
Enter row
 1: 8 3 9 0 10
Enter row
 2 : 3 5 17 1 l
Enter row
 3: 2 8 6 23 1-
Enter row
 4 : 15 7 3 2 9
Enter row
 5: 6 14 2 6 0
Row totals: 30 27 40 36 28
Column totals: 34 37 37 32 21
*/
#include <stdio.h>
int main(void)
{
    int m[5][5];
    int sum1=0, sum2=0, sum3=0, sum4=0, sum5=0, sum6=0, sum7=0, sum8=0, sum9=0, sum10=0;
    for (int i = 0; i < 5; i++)
    {
        printf("enter the %d line:", i);
        scanf("%d %d %d %d %d", &m[0][i], &m[1][i], &m[2][i], &m[3][i], &m[4][i]);
    }
    for (int j = 0; j < 5; j++)
    {

        sum1 += m[j][0];
        sum2 += m[j][1];
        sum3 += m[j][2];
        sum4 += m[j][3];
        sum5 += m[j][4];
        sum6 += m[0][j];
        sum7 += m[1][j];
        sum8 += m[2][j];
        sum9 += m[3][j];
        sum10 += m[4][j];
    }
    printf("the sum of 1 colums is %d\n", sum1);
    printf("the sum of 2 colums is %d\n", sum2);
    printf("the sum of 3 colums is %d\n", sum3);
    printf("the sum of 4 colums is %d\n", sum4);
    printf("the sum of 5 colums is %d\n", sum5);
    printf("__________________________________\n");
    printf("__________________________________\n");
    printf("                                    ");
    printf("the sum of 1 row is %d\n", sum6);
    printf("the sum of 2 row  is %d\n", sum7);
    printf("the sum of 3 row  is %d\n", sum8);
    printf("the sum of 4 row is %d\n", sum9);
    printf("the sum of 5 row is %d\n", sum10);
}
