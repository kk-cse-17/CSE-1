#include <stdio.h>
int main()
{    
    char name[50];
    char job[50];
    char DOB[20];
 
    printf("ENTER YOUR NAME\n");
    scanf("%s", name);
    printf("\nENTER YOUR JOB\n");
    scanf("%s", job);
    printf("\n ENTER YOUR DATE OF BIRTH\n"); 
    scanf("%s", DOB);

    printf("\nYOUR NAME IS %s\n", name);
    printf("\nYOUR JOB IS %s\n", job);
    printf(" YOUR DATE OF BIRTH IS %s\n", DOB);

return 0;
}