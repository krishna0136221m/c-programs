#include<stdio.h>
void main()
{
    char a[5][10];
    printf("enter character of array\n");
    for(int i=0;i<5;i++)
    {
        scanf("%s",&a[i][0]);
    }
    char key[10];
    printf("enter keys to search\n");
    scanf("%s",key);
    int test=0;
    for(int i=0;i<5;i++)
    {
        if(a[i][0]==key)
        {
            test++;
        }
    }
    if(test==1)
    {
        printf("key not found");
    }
    else
    {
        printf("key is found");
    }
}
