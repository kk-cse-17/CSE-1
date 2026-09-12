#include <stdio.h>
int main()
{
    int a,b;
    printf("ENTER 2 NUMBERS \n");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("%d is largest",a);
    }
    else
    {
        printf("%d is largest",b);
    }
}