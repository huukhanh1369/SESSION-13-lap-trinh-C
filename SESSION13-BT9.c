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
void printArrayConners(int array[MAX][MAX], int m, int n)
{
    int i ,j;
    for(i = 0 ; i < m ; i++)
    {
        for(j= 0; j < n ; j++ )
        {
            if (( i == 0 && j == 0 )|| (j == 0 && i == m-1 )|| (j == n-1 && i == 0) || (i == m-1 && j == n-1))
            {
                printf("%d ", array[i][j]);
            }
            else 
            printf("  ");
        }
        printf("\n");
    }
}

void printArrayBorder(int array[MAX][MAX], int m, int n)
{
    int i ,j;
    for(i = 0 ; i < m ; i++)
    {
        for( j= 0; j < n ; j++ )
        {
            if (i == 0 || j == 0 || i == m-1 || j == n-1 )
            {
                printf("%d ", array[i][j]);
            }
            else 
            printf("  ");
        }
        printf("\n");
    }
}

void printArrayDiagonals(int array[MAX][MAX], int m, int n) {
    if (m != n) {
        printf("ma tran khong phai hinh vuong nen khong co duong cheo chinh, phu.\n");
        return;
    }
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (i == j || i + j == m - 1) 
            {
                printf("%d ", array[i][j]);
            } 
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int checkPrime(int n) 
{
    if (n <= 1) 
        return 0;
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) 
            return 0;
    }
    return 1;
}

void printPrimes(int array[MAX][MAX], int m, int n)
{
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (checkPrime(array[i][j])) 
            {
                printf("%d ", array[i][j]);
            } 
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
int main ()
{
    int a,b;
    int array[MAX][MAX];
    while (1)
    {
        printf("==================MENU==================\n");
        printf("1. nhap gia tri cac phan tu cua mang.\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran.\n");
        printf("3. in cac phan tu o goc cua mang theo ma tran.\n");
        printf("4. in cac phan tu nam o bien cua mang theo ma tran.\n");
        printf("5. In cac phan tu nam tren duong cheo cua mang theo ma tran.\n");
        printf("6. in cac phan tu cua mang la so nguyen to theo ma tran.\n");
        printf("7. thoat.\n");
        printf("========================================\n");     
        int choice;
        printf("moi ban chon chuc nang : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("nhap vao so cot : ");
                scanf("%d",&a);
                printf("nhap vao so hang : ");
                scanf("%d",&b);
                if (a > MAX || b > MAX || a <0 || b < 0)
                {
                    printf("so cot hoac so hang phai nam trong khoang 1 - %d.\n", MAX);
                    return 1;
                }
                inputArray (array, a,b );
                break;
        
            case 2:
                printArray (array, a,b);
                break;

            case 3:
                printArrayConners (array,a,b);
                break;

            case 4:
                printArrayBorder (array, a,b);
                break;

            case 5:
                printArrayDiagonals(array, a, b);
                break;

            case 6:
                printPrimes(array, a, b);
                break;
             
            default:
                printf("Lua chon ko hop le, vui long nhap lai\n");
                break;
        }
        if(choice == 7)
        {
            printf("Thoat chuong trinh");
            break;
        }
    }
}