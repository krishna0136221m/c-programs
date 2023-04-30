#include<stdio.h>

/*
1- no argument no return


void add(void);
int main()
{
    add();
    return 0;
}
void add(void)
{
    int a,b,sum;
    printf("enter two number\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum of two number is %d",sum);
}

/*

2-with argument no return type.


   void add(int ,int) ;
   int main()
   {
       int a,b;
       printf("enter two number");
       scanf("%d%d",&a,&b);
       add(a,b);
       return 0;
   }
   void add(int a,int b)
   {
       int sum;
       sum=a+b;
       printf("sum of two nuumber is %d",sum);
   }

*/

/*
3- with no argument but return type

   int add();
   int main()
   {
    int sum;
    sum=add();
    printf("sum of two number is %d",sum);
    return 0;
   }
   int add()
   {
       int a,b,c;
       printf("enter two number");
       scanf("%d%d",&a,&b);
       c=a+b;
       return(c);
   }
*/

// 4- with argument and return type

    int add(int ,int);
    int main()
    {
        int a,b,sum;
        printf("enter two number");
        scanf("%d%D",&a,&b);
        sum=add(a,b);
        printf("sum of numbers is %d",sum);
    }
    int add(int a,int b)
    {
        int c;
        c=a+b;
        return(c);
    }
