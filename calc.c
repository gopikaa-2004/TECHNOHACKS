#include<stdio.h>
void add(int a,int b)
{
    printf("The sum of %d and %d is:%d ",a,b,(a+b));
}
void sub(int a,int b)
{
    printf("The difference of %d and %d is:%d ",a,b,(a-b));
}
void mul(int a,int b)
{
    printf("The product of %d and %d is:%d ",a,b,(a*b));
}
void div(int a,int b)
{
    printf("The division of %d and %d is:%d ",a,b,(a/b));
}
int main()
{
    int num1,num2,choice;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    printf("Enter the choice of operation:\n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division\n");
    scanf("%d",&choice);
    switch(choice)
    {

    case 1:
        add(num1,num2);
        break;
    case 2:
        sub(num1,num2);
        break;
    case 3:
        mul(num1,num2);
        break;
    case 4:
        div(num1,num2);
        break;
    default:
        printf("Enter the valid option");
    }
    return 0;
}
