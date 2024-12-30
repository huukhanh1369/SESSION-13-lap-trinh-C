#include<stdio.h>
#define MAX 100
void inputArray(int array[MAX][MAX], int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            printf("array[%d][%d] : ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
}
void printArray(int array[MAX][MAX],int m, int n) 
{
    int i, j;
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a,b;
    printf("nhap vao so cot : ");
    scanf("%d",&a);
    printf("nhap vao so hang : ");
    scanf("%d",&b);
    if (a > MAX || b > MAX)
    {
        printf("so cot hoac so hang vuot qua %d.\n", MAX);
        return 1;
    }
    int array[MAX][MAX];
    inputArray (array, a,b );
    printArray (array, a,b);
    return 0;
}