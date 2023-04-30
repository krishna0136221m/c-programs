#include<stdio.h>

// CALL BY VALUE
/*
   void change(int);
   void main()
   {
       int a;
       printf("enter number\n");
       scanf("%d",&a);
       printf("value of a before function call is %d\n",a);
       change(a);
       printf("value of a after function call is %d\n",a);
       getch();
   }
   void change(int a)
   {
       a=a+10;
       printf("value of a is %d\n",a);
   }
*/

//   CALL BY REFERENCE
     void change(int*);
     void main()
     {
         int a,*p;
         printf("enter a number\n");
         scanf("%d",&a);
         p=&a;
         printf("value of a before call function is %d\n",a);
         change(p);
         printf("value of after call of function is %d\n",a);
         getch();
     }
     void change(int *p)
     {
         *p=*p+10;
         printf("value of a is %d \n",*p);
     }
