       // STRUCTURE- it is user defined datatype which store different type of data in single unit.\

//1- simple structure program

/*
#include<stdio.h>
struct employee
{
    int code;
    char name[10];
    char job_profile[20];
    int salary;
};
void main()
{
    struct employee a;
    printf("enter code of employee\n");
    scanf("%d",&a.code);
    printf("enter name of empolyee");
  //  gets(a.name);
    scanf("%s",a.name);
    printf("\nenter job profile of employee");
    gets(a.job_profile);
    printf("\nenter salary of employee");
    scanf("%d",&a.salary);
    printf("\nemployee code is %d",a.code);
    printf("\nemployee name is %s",a.name);
    printf("\njob profile of employee is %s",a.job_profile);
    printf("\nsalary of employee is %d",a.salary);
    getch();

}
*/

//2- array of structure
// simple array of structure accepting data of employ (10)

/*
#include<stdio.h>
     struct employee
     {
         int code;
         char name[15];
         int salary;
     };
     void main()
     {
         struct employee a[5];
         int i;
         for(i=0;i<5;i++)
         {
             printf("\n enter code of employee");
             scanf("%d",&a[i].code);
             printf("\n enter name of employee");
             scanf("%s",a[i].name);
             printf("\n enter slary of employee");
             scanf("%d",&a[i].salary);
         }
         for(i=0;i<5;i++)
         {
             printf("\n code of employee is %d",a[i].code);
             printf("\n name of employee is %s",a[i].name);
             printf("\n salary of employee is %d",a[i].salary);
         }
         getch();
     }
*/

//3- to accept 5 employee data and search data through code and display the data of employee
/*

 #include<stdio.h>
 struct employee
{
    int code;
    char name[10];
    int salary;
};

    void main()
    {
        struct employee a[5];
        int i,flag=0,pos,code;
        for(i=0;i<5;i++)
        {
            printf("\n enter code of employee");
            scanf("%d",&a[i].code);
            printf("\n enter name of employee");
            scanf("%s",a[i].name);
            printf("\n enter salary of employee");
            scanf("%d",a[i].salary);
        }
        printf("enter code of employee to searc data");
        scanf("%d",&code);
        for(i=0;i<5;i++)
        {
            if(a[i].code==code)
            {
                flag=1;
                pos=i;
                break;
            }
        }
        if(flag==1)
        {
            printf("\n search code is found and data is give below");
            printf("\n code of employee is %d",a[pos].code);
            printf("\n name of employee is %s",a[pos].name);
            printf("\n salary of employee is %d",a[pos].salary);
        }
        else
        {
         printf(" sorry code does not found");
        }
        getch();
    }
*/

//  4--> STRUCTURE AS FUNCTION ARGUMENT
       // program to display an data of employee using function
/*
#include<stdio.h>

     struct employee
     {
         int code;
         char name[20];
         int salary;
     };
     void display(struct employee);
     int main()
     {
         struct employee a;
         printf("enter code");
         scanf("%d",&a.code);
         printf("enter name");
         scanf("%s",&a.name);
         printf("enter salary");
         scanf("%d",&a.salary);
         display(a);
         return 0;
     }
     void display(struct employee x)
     {
         printf("\ncode is %d",x.code);
         printf("\nname is %s",x.name);
         printf("\nsalary is %d",x.salary);
     }
*/


// 5- structre using pointer (function)

#include<stdio.h>
struct employee
{
    int code;
    char name[20];
    int salary;
};
void display(struct employee *);
int main()
{
    struct employee a;
    printf("enter code");
    scanf("d",&a.code);
    printf("enter name");
    scanf("%s",&a.name);
    printf("enter salary");
    scanf("%d",&a.salary);
    display(&a);
    return 0;
}
void display(struct employee *x)
{
    printf("\ncode is %d",x->code);
    printf("\nname is %s",x->name);
    printf("\nsalary is %d",x->salary);
}
