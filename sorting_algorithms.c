
//                              SELECTION SORTING
/*
#include<stdio.h>
void main()
{
    int a[5],temp;
    for(int i=0;i<5;i++)
    {
        printf("enter element of array : ");
        scanf("%d",&a[i]);
    }
    // algorithm
    for(int i=0;i<5-1;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("sorted array is : ");
        for(int i=0;i<5;i++)
        {
            printf("%d\t",a[i]);
        }
    getch();
}
}
*/

//                   BUBBLE SORTING

#include<stdio.h>
void main()
{
    int a[5] ,temp;
    for(int i=0;i<5;i++)
    {
        printf("enter element of array");
        scanf("%d",&a[i]);
    }
    // algorithm working
        for(int i=0;i<5;i++)
        {
            for(int k=0;k<5-1;k++)
            {
                if(a[k]>a[k+1])
                {
                    temp=a[k];
                    a[k]=a[k+1];
                    a[k+1]=temp;
                }
            }
        }
        printf("sorted array is : \n");
        for(int i=0;i<5;i++)
        {
            printf("%d",a[i]);
        }
        getch();
}










