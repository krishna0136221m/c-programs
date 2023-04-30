// factorial of any number
/*
#include<stdio.h>
int fact(int);
int main()
{
    int n;
    printf("enter number to find factorial");
    scanf("%d",&n);
    int answer=fact(n);
    printf("factorial of number is =%d",answer);
    getch();
    return 0;
}
int fact(int n)
{
    int f;
    if(n==0)
        return 1;
    else
        f=n*fact(n-1);
        return f;
}
*/

/*
// facbannaci series
#include<stdio.h>
void fab();
int main()
{
    int n;
    printf("Enter number of terms");
    scanf("%d",&n);
    printf("\n0\n1");
    fab(n-2);
    getch();
    return 0;
}
void fab(int n)
{
    static n1=0,n2=1,n3;
    if(n>0)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("\n%d",n3);
        fab(n-1);
    }
}
*/
