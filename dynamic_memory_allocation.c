// sum of element of array in c(creation of memory using malloc)
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* ptr; //declaration of integer pointer
    int limit; //to store array limit
    int i; //loop counter
    int sum; //to store sum of all elements

    printf("Enter limit of the array: ");
    scanf("%d", &limit);

    //declare memory dynamically
    ptr = (int*)malloc(limit * sizeof(int));

    //read array elements
    for (i = 0; i < limit; i++) {
        printf("Enter element %02d: ", i + 1);
        scanf("%d", (ptr + i));
    }

    //print array elements
    printf("\nEntered array elements are:\n");
    for (i = 0; i < limit; i++) {
        printf("%d\n", *(ptr + i));
    }

    //calculate sum of all elements
    sum = 0; //assign 0 to replace garbage value
    for (i = 0; i < limit; i++) {
        sum += *(ptr + i);
    }
    printf("Sum of array elements is: %d\n", sum);

    //free memory
    free(ptr); //hey, don't forget to free dynamically allocated memory.

    return 0;
}

*/

//       free(pointer_name);

/*
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,*p;
    printf("enter size limits");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("memory is not created");
    }
    printf("memory is creted");
    free(p);
    printf("memory is de-allocated");
    getch();
}

*/

// calloc()
/*
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,*p,sum=0;
    printf("enter element limits");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    printf("enter element of array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    printf("element of array is :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",*(p+i));
    }
    for(int i=0;i<n;i++)
    {
        sum+=*(p+i);
    }
    printf("\nsum of element of array is %d",sum);
    getch();

}
*/

// realloc()
/*

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p;
    p=(int*)malloc(3*sizeof(int));
    printf("%u\n",p);
    printf("memory is created successfully\n");
    p=(int*)realloc(*p,5*sizeof(int));
    printf("%u\n",p);
    printf("memory is reallocated successfully");
    getch();
}

*/










