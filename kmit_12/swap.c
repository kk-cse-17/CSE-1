/* #include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    temp = a;     a=a+b
                  b=a-b
                  a=a-b
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);
return 0;
} */

#include <stdio.h>
int main()
{
     int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);
    printf("After swapping: a = %d, b = %d\n", b, a);
    return 0;
}