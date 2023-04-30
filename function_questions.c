

/* 1- Reverse of number

      int rvr(int);
      int main()
      {
          int a,reverse;
          printf("enter a number");
          scanf("%d",&a);
          reverse=rvr(a);
          printf("reverse of number is %d",reverse);
          return 0;
      }
      int rvr(int a)
      {
          int r,sum;
          while(a>0)
          r=a%10;
          sum=sum*10+r;
          a=a/10;
      }
*/

//2- to check no is prime or not


#include<stdio.h>
void prime(int);
int main()
{
    int a;
    printf("enter number\n");
    scanf("%d",&a);
    prime(a);
}
void prime(int a)
{
    int x,count=0;
    for(x=1;x<=a;x++)
    {
        if(a%2==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("prime number");
    }
    else
    {
        printf("not prime number");
    }
}




