/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    int *p,*q;
    p=&a[0][0];
    q=&a[0][0];
    printf("\nenter elements of matrix A :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        
        scanf("%d",&a[i][j]);
        }
    }
     for(int i=0;i<3;i++)
     { 
         for(int j=0;j<3;j++)
         {
         printf("%d\t",*(p+(i*3)+j));
         }
     }
     printf ("\nenter the elements of matrix B :\n");
     for(int i=0;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
              scanf("%d",&b[i][j]);
         }
     }
   
     for(int i=0;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
           printf("%d\t",*(q+(i*3)+j));  
         }
     }
    printf(" \nAddition of matrix A and B is :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
    }
    return 0;
}
