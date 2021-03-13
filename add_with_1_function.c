//Write a program to add two user input numbers using one function.

#include<stdio.h>
void main()
{
    int n1,n2,sum;
    printf("Enter Number : ");
    scanf("%d",&n1);
    printf("Enter Number: ");
    scanf("%d",&n2);
    sum = n1+n2;
    printf(" sum of %d and %d is %d",n1,n2,sum);
}
