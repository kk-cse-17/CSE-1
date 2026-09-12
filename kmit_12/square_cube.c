#include <stdio.h>
int main()
{
    printf("ENTER A NUMBER: ");
    int num;
    scanf("%d", &num);
    printf("SQUARE OF %d IS %d\n", num, num * num);
    printf("CUBE OF %d IS %d\n", num, num * num * num);

    return 0;
}