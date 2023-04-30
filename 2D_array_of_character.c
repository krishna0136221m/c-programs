#include<stdio.h>
#include<string.h>
void main()
{
    char a[5][10];
    printf("enter arrya of string\n");
    for(int i=0;i<5;i++)
    {
        scanf("%s",&a[i][0]);
    }
    printf("array of string is given below\n");
    for(int i=0;i<5;i++)
    {
        printf("%s",a[i]);
        printf("\n");
    }
    getch();
}
