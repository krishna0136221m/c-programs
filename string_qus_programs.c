#include<stdio.h>
void main()
{
    /* TO COPY A STRING FROM ONE TO OTHER
    char a[10],b[10];
    printf("enter string\n");
    scanf("%s",a);
    for(int i=0;i<10;i++)
    {
        b[i]=a[i];
    }
    b[10]='\0';
    printf("the copied value is %s",b);
    */

    /*
    2- to concatenate two strings(logic is by copying both in third)

    char a[10],b[10],c[30];
    printf("enter first and second strings\n");
    scanf("%s%s",a,b);
    int i,j;
    i=j=0;
    while(a[i]!='\0')
    {
        c[i]=a[i];
        i++;
    }
    while(b[j]!='\0')
    {
        c[i]=b[j];
        i++;
        j++;
    }
    c[30]='\0';
    printf("concatenated string is %s",c);
*/

/*
3- to make character from upper case to lower case without uding built function
    char a[10];
    printf("enter characters");
    scanf("%c",&a);
    for(int i=0;a[i]!='\0';i++)
    {
        a[i]=a[i]+32;
    }
    printf("from upper case to lower case %c",a);

*/

/*
4- to make lower case to upper case without using bulid function
    char a[10];
    printf("enter character");
    scanf("%c",&a);
    for(int i=0;a[i]!='\0';i++)
    {
        a[i]=a[i]-32;
    }
    printf("lower to upper case %s",a);

*/


/*
5- To reverse string without using build function
    char a[10];
    char b[10];
    printf("enter your character\n");
    scanf("%s",&a);
    int i,j;
    j=0;
    for(i=strlen(a)-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    b[10]='\0';
    printf("reverse dtring is %s",b);

*/

/*
6- TO CHECK GIVEN STRING IS PALANDROM.

    char a[10],b[10];
    int i,j,check=0;
    printf("enter your string");
    scanf("%s",a);
    j=0;
    for(i=strlen(a)-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    b[i]='\0';
    for(int i=0;i<10;i++)
    {
        if(b[i]!=a[i])
        {
            check=1;
            break;
        }
    }
    if(check==0)
    {
        printf("string is palandrom");
    }
    else
    {
        printf("string is not palandrom");
    }

*/

// 7-

    getch();
}
