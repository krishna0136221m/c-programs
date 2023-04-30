#include<stdio.h>

//1-adding number
/*
void main()
{
    int a,b,*q,*p,c;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    c=*p+*q;
    printf("added value is %d",c);
    getch();
*/

// 2-check number is odd or even
/*
    int main()
    {
        int a,*p;
        printf("enter number to check odd or even\n");
        scanf("%d",&a);
        p=&a;
        if(*p%2==0)
            printf("number is even");
        else
            printf("number is odd");
        return 0;
    }
*/

//3- check number is prime or not
/*
       int main()
       {
           int a,count=0,i,*p;
           printf("enter no. to check prme or not \n");
           scanf("%d",&a);
           p=&a;
           for(i=1;i<=*p;i++)
           {
               if(*p%i==0)
                   count++;
           }
           if(count==2)
            printf("number is prime ");
           else
            printf("number is not prime");
       }
*/

//3- to accept and display an array.

/*
       int main()
       {
           int a[10],i,*p;
           printf("enter elements of array \n");
           for(i=0;i<10;i++)
           {
               scanf("%d",&a[i]);
           }
           // we can use also p=a;
           p=a;
           for(i=0;i<10;i++)
           {
               printf("%d",*p+i);
           }
           return 0;
       }
*/

//4- pointer in function

 /*      void add(int*,int*);
       void main()
       {
           int a,b,*p,*q;
           printf("enter 2 numbers");
           scanf("%d%d",&a,&b);
           p=&a;
           q=&b;
           add(p,q);
       }
       void add(int *p,int *q)
       {
           int s;
           s=*p+*q;
           printf("added value is %d",s);
       }
*/


//5- adding element of an array
/*
      void main()
      {
          int a[10],*p,i,sum=0;
          printf("enter elements of array");
          for(i=0;i<10;i++)
          {
              scanf("%d",&a[10]);
          }
          p=a;
          for(i=0;i<10;i++)
          {
              sum=sum+*p+i;
          }
          printf("sum of elements of array is %d",sum);
          getch();
          }
*/


//6- to count odd even occurance in array;
/*
       void main()
       {
           int a[10],i,*p,odd=0,even=0;
           printf("enter lements of array\n");
           for(i=0;i<10;i++)
           {
               scanf("%d",&a[10]);
           }
           p=a;
           for(i=0;i<10;i++)
           {
               if(*p+i%2==0)
               {
                   odd++;
               }
               else
               {
                   even++;
               }
           }
           printf("number of odd id %d and even is %d",odd,even);
           getch();
       }
*/

             // function question using pointers

// 7- check odd even number

       void check(void);
       void main()
       {
           char c[20]=check();
           printf("number is %s",c);
       }
       void check()
       {
           int a ,*p;
           char b;
           printf("enter number to check \n");
           scanf("%d",&a);
           p=&a;
           if(*p%2==0)
           {
              printf("odd number") ;
           }
           else
           {
               printf("even number");
           }

       }
