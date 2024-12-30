#include<stdio.h>
int check(int a, int b)
{
    int i,max = 1;
    for(int i = 1; i <= a || i <= b; i++)
    {
        if ( a % i ==0 && b % i ==0 )
        {
            if ( i > max )
            max = i;
        }
    }
    return max;
}
int main ()
{
    int c,d;
    printf("nhap vao so thu nhat : ");
    scanf("%d", &c);
    printf("nhap vao so thu hai : ");
    scanf("%d", &d);    
    int UCLN = check (c,d);
    printf("uoc chung lon nhat cua 2 so la : %d",UCLN);
    return 0;
}