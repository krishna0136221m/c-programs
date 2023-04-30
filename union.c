                 //UNION

//this program give the garbage value

/*
#include<stdio.h>
union emp
{
    int code;
    char name[30];
    int salary;
}a;
int main()
{
    printf("enter code");
    scanf("%d",&a.code);
    printf("enter name");
    scanf("%s",&a.name);
    printf("ENTER SALARY");
    scanf("%d",&a.salary);
    printf("code is %d",a.code);
    printf("name is %s",a.name);
    printf("salary is %d",a.salary);
    return 0;
}

*/

// this program of union will give the real value

#include<stdio.h>
union emp
{
    int code;
    char name[30];
    int salary;
}a;
int main()
{
    printf("enter code");
    scanf("%d",&a.code);
    printf("code is %d\n",a.code);
    printf("\nenter name");
    scanf("%s",&a.name);
    printf("name is %s\n",a.name);
    printf("\nenter salary");
    scanf("%d",&a.salary);
    printf("salary is %d",a.salary);
    return 0;
}
