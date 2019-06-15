#include<stdio.h>
int main()
{
    int i=0,n,b,j;
    do
    {
        printf("Height:");
        scanf("%d",&n);
    }while(n<0||n>23);
    for(i=0;i<n;i++)
    {
        for(b=0;b<n-1-i;b++)
        printf(" ");
        for(j=0;j<=i;j++)
        printf("#");
        printf("#\n");
    }
}