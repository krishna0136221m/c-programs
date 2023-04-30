
    // file handling
/*
build in function  for file handlling
1- fputs();
2- fprintf();
3- fputc();
*/


// program of using fput()
/*
#include<stdio.h>
int main()
{
    FILE *a;
    a=fopen("test.txt","w");
    fputc('A',a);
    fclose(a);
    printf("done successfully");
    return 0;
}
*/

// program to use fprintf();
/*
#include<stdio.h>
int main()
{
    FILE *a;
    a=fopen("test.txt","w");
    fprintf(a,"the use of fprintf() is to add any data in file.");
    fclose(a);
    printf("done successfully");
    return 0;
}
*/


// program use of fputs();
/*
#include<stdio.h>
int main()
{
    FILE *a;
    a=fopen("test1.txt","w");
    fputs("fputs()- this is use to insert line of character in file",a);
    fclose(a);
    printf("done successfully");
    return 0;
}
*/



// program to take input from user and print in file using fprintf();

/*
#include<stdio.h>
int main()
{
    int roll,marks;
    char name[10];
    FILE *a;
    a=fopen("student_data.txt","w");
    if(a==NULL)
    {
        printf("THE FILE DOES NOT EXISTS");
        return 0;
    }
    printf("enter roll number");
    scanf("%d",&roll);
    fprintf(a,"\nroll number is %d",roll);
    printf("enter name ");
    scanf("%s",&name);
    fprintf(a,"\nname is %s",name);
    printf("enter marks");
    scanf("%d",&marks);
    fprintf(a,"\nmarks is %d",marks);
    fclose(a);
    printf("\ndone successfullly");
    return 0;
}
*/

// fgets - it is use to read content of file by character .

// program to read data of file and printing it by using fgets
/*
#include<stdio.h>
int main()
{
    FILE *a;
    char c;
    a=fopen("friends.txt","r");
    while((c=fgetc(a))!=EOF)
    {
        printf("%C",c);
    }
    fclose(a);
    return 0;
}
*/

// program to print vowel and consonent from FILE
/*
#include<stdio.h>
int main()
{
    FILE *a;
    char c;
    int vowel=0 ,cons=0;
    a=fopen("friends.txt","r");
    c="a";
    while(c!=EOF)
    {
        c=fgetc(a);
        {
            if(c>='a'&&c<='z' || c>='A' &&c<='Z')
            {
                if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
                   c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
                {
                    vowel++;
                }
             else{
                cons++;
             }
            }
        }
    }
    printf("vowels are %d\n",vowel);
    printf("\nconsonent are %d", cons);
    return 0;
}
*/

//           fgets();
// program to read value using gets() function.
/*
#include<stdio.h>
int main()
{
    FILE *a;
    a=fopen("test1.txt","r");
    char buff[500];
    printf("%s",fgets(buff,500,a));
    fclose(a);
    return 0;
}
*/
