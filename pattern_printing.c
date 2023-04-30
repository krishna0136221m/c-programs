//                       ---> PATTERN PRINTING<---
/*
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("ENTER NUMBER OF ROWS");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}
*/

/*
#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("enter number of rows");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(k=0;k<n-i;k++)
        {
            printf(" ");
        }
        for(j=0;j<i;j++)
        {
            printf("*");
            //printf("%d",j);
            //pritnf("%d",i);
        }
        printf("\n");
    }
    getch();
}
*/


/*
#include<stdio.h>
void main()
{
    int i,j,k,n;
    printf("enter number of rows");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(k=0;k<n-i;k++)
        {
           // printf("%d",i);
           printf("*");
        }
        for(j=0;j<i;j++)
        {
            //printf("%d",i);
            printf("*");
        }
        printf("\n");
    }
    getch();
}
*/

/*
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("enter number of rows");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}
*/

/*
#include<stdio.h>
void main()
{
    int i,j,k,l;
    for(i=1;i<=6;i++)
    {
        for(k=1;k<=6-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(l=1;l<=i;l++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}
*/

/*
#include<stdio.h>
void main()
{
    int i,j,k,l;
    for(i=1;i<=6;i++)
    {
        for(k=1;k<=i;k++)
        {
            printf(" ");
        }
        for(j=1;j<6-i;j++)
        {
            printf("*");
        }
        for(l=1;l<=6-i;l++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}
*/
/*
#include<stdio.h>
void main()
{
    int i,j,num=1;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
    getch();
}
*/


